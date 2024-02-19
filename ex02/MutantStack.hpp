#pragma once

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
public:
  MutantStack<T>() : std::stack<T>() {}

  MutantStack<T>(MutantStack<T> const &rhs) : std::stack<T>(rhs) {
    *this = rhs;
  }

  MutantStack<T> &operator=(MutantStack<T> const &rhs) { //
    if (this == &rhs)
      return *this;
    std::stack<T>::operator=(rhs);
    return *this;
  }
  ~MutantStack<T>() {}

  typedef typename std::deque<T>::iterator iterator;
  typedef typename std::deque<T>::reverse_iterator reverse_iterator;

  iterator begin() { return this->c.begin(); }
  iterator end() { return this->c.end(); }

  reverse_iterator rbegin() { return this->c.rbegin(); }
  reverse_iterator rend() { return this->c.rend(); }
};
