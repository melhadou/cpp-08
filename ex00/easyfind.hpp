#pragma once

#include <algorithm>
#include <iostream>

template <typename T> void easyfind(T &first, int second) {
  if (std::find(first.begin(), first.end(), second) != first.end()) {
    std::cerr << "Found " << second << std::endl;
    return;
  }
  std::cerr << "Couldn't find " << second << std::endl;
}
