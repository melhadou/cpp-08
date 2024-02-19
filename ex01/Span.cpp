#include "Span.hpp"
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <list>
#include <stdexcept>

typedef std::vector<int>::iterator iterator; // simplifying purposes

Span::Span() : vector(0), size(0) {}
Span::Span(unsigned int n) : vector(0), size(n) {}
Span::~Span() {}

Span::Span(Span const &rhs) { *this = rhs; }

Span &Span::operator=(Span const &rhs) {
  if (this == &rhs)
    return *this;
  this->size = rhs.size;
  this->vector = rhs.vector;
  return *this;
}

void Span::addNumber(int n) {
  if (vector.size() == this->size)
    throw std::range_error(
        "Span::addNumber() => Can't add the element: Vector size if full");
  this->vector.push_back(n);
}

int Span::shortestSpan() {
  if (this->vector.empty() || this->vector.size() < 2) {
    throw std::range_error(
        "Span::shortestSpan() => Vector must contain at least two elements.");
  }
  std::vector<int> tmp(this->vector);

  std::sort(tmp.begin(), tmp.end());

  int span = *(tmp.begin() + 1) - *tmp.begin();

  for (iterator it = tmp.begin(); it != tmp.end() - 1; it++) {
    // check for span on each 2 elements
    int tmp;
    if ((tmp = *(it + 1) - *it) < span)
      span = tmp;
  }

  return span;
}

int Span::longestSpan() {
  if (this->size < 2 || this->vector.empty()) {
    throw std::range_error(
        "span::longestSpan: Vector must contain at least two elements.");
  }

  iterator minVal = std::min_element(this->vector.begin(), this->vector.end());
  iterator maxVal = std::max_element(this->vector.begin(), this->vector.end());

  return *maxVal - *minVal;
}

void Span::fillVector(unsigned int range) {
  // generate random numbers. and assinge them using the iterator
  if (range == 0 || range > this->size)
    throw std::range_error("Span::fillVector: can't Generate.");

  srand(time(0));

  std::list<int> tmp(range);
  std::generate(tmp.begin(), tmp.end(), rand);

  // inserting the generated number into the vector;
  this->vector.insert(this->vector.end(), tmp.begin(), tmp.end());
}

void Span::printVector(void) {
  iterator it;
  if (!this->size || this->vector.empty())
    throw std::range_error("span::printVector: vector is empty");
  std::cout << "Elements in this Vector:" << std::endl;
  for (it = this->vector.begin(); it != this->vector.end(); it++) {
    std::cout << *it << std::endl;
  }
}

/* Getters */
unsigned int Span::getSize(void) const { return this->size; }
std::vector<int> const &Span::getVector(void) const { return this->vector; }
