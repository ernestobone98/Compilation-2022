#ifndef _TABLE-SYMBOLES_H
#define _TABLE-SYMBOLES_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 201

typedef enum _type_t {
    _TYPE_ERROR,
    _INT,
    _VOID,
    _STRUCT
} type_t;

typedef struct _symbole_t {
    char* name;
    type_t type;
} symbole_t;

typedef struct _node {
    symbole_t sym;
    struct node* next;
} node;

typedef struct _linked_list{
    node* head;
    int len;
} linked_list;

linked_list ll[SIZE];
int scope;
//initialiser un tableau de listes chaineess
// faire allocation d'un node pour les elems de la liste

node* create_node(char* name, type_t type);
//node* create_node(const char* nom, void* type);
void delete_node(node* node);
void add(linked_list* list, symbole_t* sym, type_t type);
//void add_ts(linked_list* list_parent, linked_list* list_child);
symbole_t* search(linked_list list, char* name);
void modify(linked_list list, char* sym, type_t type);
void initialiaze();

#endif