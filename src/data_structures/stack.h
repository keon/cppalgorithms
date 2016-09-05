#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class ArrayStack {
 private:
  int top;
  int capacity;
  T *storage;

 public:
  ArrayStack(int capacity) {
    if (capacity <= 0)
      throw std::runtime_error("Stack's capacity must be positive");
    storage = new T[capacity];
    this->capacity = capacity;
    top = -1;
  }
  ~ArrayStack() {
    delete[] storage;
  }

  void push(T value) {
    if (top == capacity)
      throw std::runtime_error("Stack's underlying storage is overflow");
    top++;
    storage[top] = value;
  }

  T pop() {
    if (top == -1)
      throw std::runtime_error("Stack is empty");
    return storage[top--];
  }

  T peek() {
    if (top == -1)
      throw std::runtime_error("Stack is empty");
    return storage[top];
  }

  bool isEmpty() {
     return (top == -1);
  }
};

class LinkedListStack {
 private:
 public:
  LinkedListStack(){}
  ~LinkedListStack(){}
};

#endif // STACK_H
