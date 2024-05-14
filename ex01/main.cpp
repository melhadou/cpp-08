#include "Span.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

int main(void) {

  try {
		// generating data to fill the vector with;
		std::vector<int> data;
		for (int i = 0; i < 10000; i++)
			data.push_back(rand());

		Span sp = Span(10001);

		sp.fillVector(data.begin(), data.end());

		sp.addNumber(2);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

    // sp.printVector();

  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}
