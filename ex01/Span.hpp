#pragma once

#include <vector>
#include "vector"

typedef std::vector<int>::iterator it;

class Span {
private:
  std::vector<int> vector; // the vector that will hole the data
  unsigned int size;       // size of the vector

public:
  Span(void);
  Span(unsigned int n);
  Span(Span const &rhs);
  Span &operator=(Span const &rhs);
  ~Span();

  void addNumber(int n);
  int shortestSpan();
  int longestSpan();
  void fillVector(it begin, it end);
  void printVector(void);

  // getters
  unsigned int getSize(void) const;
  std::vector<int> const &getVector(void) const;
};
