#ifndef QUEUE_H
#define QUEUE_H

#include <stdexcept>
#include <iostream>

template <typename T>
class ArrayQueue {
 private:
  int capacity;
  T *storage;
  int rear, front;

 public:
  ArrayQueue(int capacity) {
    if (capacity <= 0)
      throw std::runtime_error("Queue's capacity must be positive");
    storage = new T[capacity];
    this->capacity = capacity;
    rear = -1;
    front = -1;
  }
  ~ArrayQueue() {
    delete[] storage;
  }

  void enqueue(T value) {
    if (rear > capacity - 1)
      throw std::runtime_error("Queue's underlying storage is overflow");
    storage[++rear] = value;
  }

  T dequeue() {
    if (isEmpty())
      throw std::runtime_error("Queue is empty");
    return storage[++front];
  }

  bool isEmpty() {
    return (front == rear);
  }

};

#endif // QUEUE_H
