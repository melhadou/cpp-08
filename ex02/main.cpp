#include "MutantStack.hpp"
#include "iostream"
#include <list>

int main(void) {
  // main dyalhom
  std::cout << "--------------------- Testing using subject main; "
               "--------------------- "
            << std::endl;

  MutantStack<int> mstack;

  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  std::cout
      << "--------------------- Testing using the list; --------------------- "
      << std::endl;

  std::list<int> list_stack;
  list_stack.push_back(5);
  list_stack.push_back(17);
  std::cout << list_stack.back() << std::endl;
  list_stack.pop_back();
  std::cout << list_stack.size() << std::endl;
  list_stack.push_back(3);
  list_stack.push_back(5);
  list_stack.push_back(737);
  list_stack.push_back(0);
  std::list<int>::iterator list_it = list_stack.begin();
  std::list<int>::iterator list_ite = list_stack.end();
  ++list_it;
  --list_it;
  while (list_it != list_ite) {
    std::cout << *list_it << std::endl;
    ++list_it;
  }
  return 0; //
}
