#include "table-symboles.h"

struct linked_list list;

Node* create_node(symbole_t *sym){
    Node* node = (Node*) malloc(sizeof(Node));
    strcpy(node->sym.name, sym->name);
    node->sym.type = sym->type;
    node->next = NULL;
    return node;
}


// parcourir la liste pour rajouter a la fin
void add(linked_list* list, symbole_t* sym){
    Node* node = create_node(sym);
    node->next = list->head;
    list->head = node->next;
    list->len++;
}

// the node aux works like a pointer in the list
symbole_t* search(linked_list* list, char* name){
    Node* aux = list->head;
    while (aux)
    {
        if (strcmp(aux->sym.name, name) == 0)
        {
            return &aux->sym;
        }
        aux = aux->next;
    }
    return NULL;
}

void modify(linked_list* list, char* sym, char* type){
    symbole_t* searched = search(list, sym);
    searched->type = type;
}


void initialiaze(){
    //creer l'espace memoire pour les tables de symboles
}