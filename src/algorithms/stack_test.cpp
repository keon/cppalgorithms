#include "stack.h"
#include <iostream>

using namespace std;

int main() {
  ArrayStack<int> s(5);
  s.push(1);
  s.push(5);
  s.push(7);

  try {
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
  }
  catch (const std::exception& e) {
    cout << e.what() << endl;
  }

  ArrayStack<string> st(5);
  st.push("a");
  st.push("b");
  st.push("c");

  try {
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    cout << st.pop() << endl; // error
  }
  catch (const std::exception& e) {
    cout << e.what() << endl;
  }

}
