#include "queue.h"
#include <iostream>

using namespace std;

int main() {
  ArrayQueue<int> s(5);
  s.enqueue(1);
  s.enqueue(5);
  s.enqueue(7);

  try {
    cout << s.dequeue() << endl;
    cout << s.dequeue() << endl;
    cout << s.dequeue() << endl;
  }
  catch (const std::exception& e) {
    cout << e.what() << endl;
  }

  return 0;
}
