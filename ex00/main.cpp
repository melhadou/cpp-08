#include "easyfind.hpp"
#include <deque>
// #include <vector>

int main(void) {

  // std::vector<int> vec;
  std::deque<int> vec;

  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  easyfind(vec, 4);

  return 0;
}
