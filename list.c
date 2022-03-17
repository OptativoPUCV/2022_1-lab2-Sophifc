#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

typedef struct Node Node;

struct Node {
    void * data;
    Node * next;
    Node * prev;
};

struct List {
    Node * head;
    Node * tail;
    Node * current;
};

typedef List List;

Node * createNode(void * data) {
    Node * new = (Node *)malloc(sizeof(Node));
    assert(new != NULL);
    new->data = data;
    new->prev = NULL;
    new->next = NULL;
    return new;
}

List * createList() {
  List* lista=(List*) malloc (sizeof(List));
  lista->head=NULL;
  lista->tail=NULL;
  return lista;
  return NULL;
     return NULL;
}

void * firstList(List * lista) {
  if(lista->head==NULL){
    return NULL;
  }
  else{
    lista->current=lista->head;
    return lista->head->data;
  }
    return NULL;
}

void * nextList(List * lista) {
  if(lista->current==NULL || lista->current->next==NULL){
    return NULL;
  }
  else{
    lista->current=lista->current->next;
    return lista->current->data;
  }
    return NULL;
}

void * lastList(List * lista) {
  if(lista->tail==NULL){
    return NULL;
  }
  else{
    lista->current=lista->tail;
    return lista->tail->data;
  }
    return NULL;
}

void * prevList(List * lista) {
  if(lista->current->prev==NULL){
    return NULL;
  }
  else{
    lista->current=lista->current->prev;
    return lista->current->data;
  }
    return NULL;
}

void pushFront(List * list, void * data) {
}

void pushBack(List * list, void * data) {
    list->current = list->tail;
    pushCurrent(list,data);
}

void pushCurrent(List * list, void * data) {
}

void * popFront(List * list) {
    list->current = list->head;
    return popCurrent(list);
}

void * popBack(List * list) {
    list->current = list->tail;
    return popCurrent(list);
}

void * popCurrent(List * list) {
    return NULL;
}

void cleanList(List * list) {
    while (list->head != NULL) {
        popFront(list);
    }
}