// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>

template<typename T, int size>
class TStack {
 private:
    T data[Size];
    int top;

 public:
  TStack() : top(-1) {}
  void add(T value) {
    if (!isFull()) data[++top] = value;
    else throw std::string("Full");
  }
  T show() const { return data[top]; }
  T pop() {
    if (isEmpty()) throw std::string("Empty");
    else return data[top--];
  }
  bool isEmpty() const { return top == -1; }
  bool isFull() const { return top == size - 1; }
};

#endif  // INCLUDE_TSTACK_H_
