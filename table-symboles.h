#ifndef _TABLE-SYMBOLES_H
#define _TABLE-SYMBOLES_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct symbole_t {
    char* name;
    //int val;
    char* type;
} symbole_t;

typedef struct Node {
    symbole_t sym;
    struct node* next;
} Node;

typedef struct linked_list{
    Node* head;
    int len;
} linked_list;

struct linked_list list;

//initialiser un tableau de listes chaineess

Node* create_node(symbole_t *sym);
void delete_node(Node* node);
void add(linked_list* list, symbole_t* sym);
symbole_t* search(linked_list* list, char* name);
void modify(linked_list* list, char* sym, char* type);

#endif