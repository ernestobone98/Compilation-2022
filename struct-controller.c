#include "table-symboles.h"

node* create_node(char* name, type_t type){
    node* n_node = (node*) calloc(1,sizeof(node));
    n_node->sym.name = strdup(name);
    if(type != _TYPE_ERROR){
        n_node->sym.type = type;
        n_node->next = NULL;
        return n_node;
    }
    else{
        printf("TYPE ERROR --> symbol %s", name);
        return NULL;
    }
    
}


// parcourir la liste pour rajouter un symbole a la fin d'une ts
void add(linked_list* list, symbole_t* sym, type_t type){
    node* n_node = create_node(sym->name, sym->type);
    if (n_node != NULL){
        n_node->next = list->head;
        list->head = n_node;
    }
}


// the node aux works like a pointer in the list
symbole_t* search(linked_list list, char* name){
    node* aux = list.head;
    while (aux != NULL && aux->sym.name != NULL)
    {
        if (strcmp(aux->sym.name, name) == 0)
        {
            return &aux->sym;
        }
        aux = aux->next;
    }
    return NULL;
}

void modify(linked_list list, char* sym, type_t type){
    symbole_t* searched = search(list, sym);
    if (searched != NULL){
        searched->type = type;
    }
}

void test(){
    //initialiaze();
    //add(list, , _INT);
    scope = 0;
    ll[0].head = malloc(sizeof(node));
    ll[0].head->sym.name = "_INT";
    printf(ll[0].head->sym.name);
    ll[0].head->sym.type = _INT;
    symbole_t* t = search(ll[0], ll[0].head->sym.name);
    if(t->type == _INT){
        printf("type int\n");
        printf(ll[0].head->sym.name);
    }
    else{printf("type not int\n");}

}

void initialiaze(){
    //creer l'espace memoire pour les tables de symboles
    //node* this_node;
 
}

int main(){
    test();
    return 0;
}