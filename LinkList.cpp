#include "ll.h"

template <class T>
LinkList::LinkList(T elm){
  node_t *node;
  node = new node_t;
  node->data = elm
  node->prev = NULL;
  node->next = NULL;

  curr = node;
  root = node;
}

