set(CMAKE_CXX_FLAGS "-Wall -std=c++11")

include_directories("../data_structures")

add_executable(stack
  stack_test.cpp
)
add_executable(linked_list
  linked_list_test.cpp
)
add_executable(queue
  queue_test.cpp
)
