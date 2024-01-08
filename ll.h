#ifndef LL_H
#define LL_H

template<class T>
struct node {
  T data;
  struct node *next;
  struct node *prev;
};
typedef struct node node_t;

template <class T>
class LinkList {

private:
  node_t *root;
  node_t *curr;
  size_t size;

public:
  LinkList(T elm);

  ~LinkList();
};

#endif // !LL_H

