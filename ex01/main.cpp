#include "Span.hpp"
#include <exception>
#include <iostream>

int main(void) {

  std::cout << "----------- Using Subject main -----------" << std::endl;
  Span sp = Span(5);

  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  std::cout << "----------- Using random generator -----------" << std::endl;

  try {
    Span spa = Span(1000);

    spa.fillVector(1000);

    std::cout << spa.shortestSpan() << std::endl;
    std::cout << spa.longestSpan() << std::endl;
    // spa.printVector();
    // std::cout << "vector size -> " << spa.getSize() << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
