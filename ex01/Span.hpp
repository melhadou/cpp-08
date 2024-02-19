#pragma once

#include "vector"

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
  void fillVector(unsigned int range);
  void printVector(void);

  // getters
  unsigned int getSize(void) const;
  std::vector<int> const &getVector(void) const;
};
