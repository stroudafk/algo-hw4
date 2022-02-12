// ==== DO NOT CHANGE ANYTHING IN THIS FILE! ====
#include <iostream>
#include <vector>
#include "HW4.h"


int main() {
  auto id = getTxstId();
  if (id.empty()) {
    throw std::runtime_error("Please update the getTxstId method!");
  }

  std::vector<int> q1Vec = generateVector(id);
  std::cout << "Your input array for Q1 is " << vecToString(q1Vec) << "\n";
  // add second parameter to mystery()
  q1Vec.emplace_back(5);
  std::cout << "Your first row should be " << vecToString(q1Vec) << "\n";
}
