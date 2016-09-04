#ifndef MESSAGE_H
#define MESSAGE_H

#include <iostream>

class message{
 public:
  void printMessage();
};

void message::printMessage(){
  std::cout << "Makefile Test MEssage>>>>" << std::endl;
}
#endif // MESSAGE_H
