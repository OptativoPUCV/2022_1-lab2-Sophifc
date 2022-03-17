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
  List* list=(List*) malloc (sizeof(List));
  list->head=NULL;
  list->tail=NULL;
  return list;
  return NULL;
     return NULL;
}

void * firstList(List * list) {
  if(list->head==NULL){
    return NULL;
  }
  else{
    list->current=list->head;
    return list->head->data;
  }
    return NULL;
}

void * nextList(List * list) {
  if(list->current==NULL || list->current->next==NULL){
    return NULL;
  }
  else{
    list->current=list->current->next;
    return list->current->data;
  }
    return NULL;
}

void * lastList(List * list) {
  if(list->tail==NULL){
    return NULL;
  }
  else{
    list->current=list->tail;
    return list->tail->data;
  }
    return NULL;
}

void * prevList(List * list) {
  if(list->current==NULL || list->current->prev==NULL ){
    return NULL;
  }
  else{
    list->current=list->current->prev;
    return (list->current->data);
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
  Node* nodo=createNode((void*)data);
  if(list->head==NULL){
    list->head=nodo;
  }
  else{
    list->head->prev=nodo;
    nodo->next=list->head;
    list->head=nodo;
  }
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
  /*if(list->current->prev!=NULL){
    list->current->prev->next=list->current->next;
  }
  else{
    list->head=list->current->next;
    list->current->next->prev=NULL;
  }
  if(list->current->next!=NULL){
    list->current->next->prev=list->current->prev;
  }
  else{
    list->tail=list->current->prev;
    list->current->prev->next=NULL;
  }
  return (list->current->data);*/
    return NULL;
}

void cleanList(List * list) {
    while (list->head != NULL) {
        popFront(list);
    }
}