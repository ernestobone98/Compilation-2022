#include "table-symboles.h"

struct linked_list* list[SIZE];

/*node* create_node(symbole_t *sym){
    node* n_node = (node*) malloc(sizeof(node));
    n_node->sym.name = strdup(sym->name);
    if(sym->type != _TYPE_ERROR){
        n_node->sym.type = sym->type;
        n_node->next = NULL;
        return n_node;
    }
    else{
        printf("TYPE ERROR --> symbol %s", sym->name);
        return 1;
    }
    
}*/


node *create_node(const char *nom, void *type)
{
    node *node_n = (node *)malloc(sizeof(node));
    node_n->sym.name = strdup(nom);
    if (type != NULL)
    {
        node_n->sym.type = (type_t)type;
    }
    node_n->next = NULL;
    return node_n;
}


// parcourir la liste pour rajouter un symbole a la fin d'une ts
void add(linked_list* list, symbole_t* sym, type_t type){
    node* n_node = create_node(sym->name, sym->type);
    n_node->next = list->head;
    list->head = n_node->next;
    list->head->sym.type = type;
    //list->len++;
}
 

// rajouter une table de symbole à notre liste globale qui contient toutes les ts
/*void add_ts(linked_list* list_parent, linked_list* list_child){
    list_parent->next = list_child->head;
    list_child->next = NULL;
}*/

// the node aux works like a pointer in the list
symbole_t* search(linked_list* list, char* name){
    node* aux = list->head;
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

void modify(linked_list* list, char* sym, type_t type){
    symbole_t* searched = search(list, sym);
    searched->type = type;
}

void test(){
    type_t temp;
    printf("sizeof node : %zu\n", sizeof(node));
    printf("sizeof linked list : %zu\n", sizeof(linked_list));
    printf("sizeof HT[0] : %zu\n", sizeof(sizeof(list[0])));
    add(list, "alpha", _INT);
    if(search(list, "alpha") == _INT){
        printf("type int");
    }
    printf("type not int");
}

void initialiaze(){
    //creer l'espace memoire pour les tables de symboles
    linked_list* list = (linked_list*) malloc(sizeof(linked_list)) ;
    
}

int main(){
    test();
    return 0;
}