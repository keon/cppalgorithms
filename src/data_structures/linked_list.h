#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdexcept>

/*
 * Linked List Classes by Keon Kim
 */

template <typename T>
class ListNode {
 private:
  ListNode *next;
  T value;
 public:
  ListNode(const T &value): next(NULL), value(value) {}
  ~ListNode() {}

  ListNode *getNext() const { return next; }
  const T& getValue() const { return value; }
  void setNext( ListNode *node ) { next = node; }
  void setValue( const T &value ) { this->value = value; }
};

template <typename T>
class SinglyLinkedList {
 private:
  // Head of the list contains no value;
  // but points to the other values
  ListNode<T> *head;
  int size;

 public:
  SinglyLinkedList() {
    size = 0;
  }

  bool add (T value) {
    ListNode<T> newNode(value);
    head->setNext(&newNode);
    return true;
  }

  bool remove(int position) {

  }

  void print() {

  }

  bool isEmpty() {

  }

  ~SinglyLinkedList() {

  }
};

#endif // LINKED_LIST_H
