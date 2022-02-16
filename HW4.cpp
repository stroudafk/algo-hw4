#include "HW4.h"

#include <random>
#include <sstream>

std::string getTxstId() {
  // TODO change this to your TXST ID (should begin with "A")
  return "A04955601";
}

std::vector<std::vector<int>> callsToMystery() {
  return {
    // Fill in your recursive calls as vectors here
    // For example, a call to mystery([4, 5, 3, 9, 7, 1, 3], 3) would start
    // with
    // {4, 5, 3, 9, 7, 1, 3, 3},
  
  // Your input array for Q1 is 
  // {44, 76, 16, 67, 30, 47, 0, 87, 6, 38}
  // Your first row should be 
  // {44, 76, 16, 67, 30, 47, 0, 87, 6, 38, 5}
  {44, 76, 16, 67, 30, 47, 0, 87, 6, 38, 5},
  {76, 67, 47, 87, -1},
  {67,47, -1},
  {47, -1}

  //Explanation  
  // recursive iteration 1
  // k = 5
  // pivot = 44
  // {16, 30, 0, 6, 38} {44} {76, 67, 47, 87}
  // take the else route, as 5 + 1 = 6 and not > 5
  // call on mystery({76, 67, 47, 87}, 5 - 5 -1)

  // recursion 2
  // k = -1
  // pivot = 76
  // {76, 67, 47, 87}
  // {67, 47} {76} {87}

  //k is less than left.size()
  // call again on mystery({67, 47}, -1)

  // recursion 3
  // k = -1
  // pivot = 67
  // {67, 47}

  // {47} {67} {}

  // k is less than left size, so recurse again over mystery({47}, -1)

  // recursion 4
  // k = -1
  // pivot = 47
  // {47}
  // vector size == 1 so return value is 47
  };
}














// ==== DO NOT CHANGE ANYTHING BELOW THIS LINE! ====

// Pseudo-randomly and deterministically generate a 10-element array, using id
// as the source of randomness
std::vector<int> generateVector(const std::string& id) {
  std::minstd_rand rng;
  auto seed = static_cast<uint32_t>(std::hash<std::string>{}(id));
  rng.seed(seed);

  std::vector<int> vec;
  for (int i = 0; i < 10; ++i) {
    // take a mod so that the numbers aren't too large
    vec.emplace_back(rng() % 97);
  }
  return vec;
}

std::string vecToString(const std::vector<int>& vec) {
  std::stringstream ss;
  bool first = true;
  for (auto elem : vec) {
    if (first) {
      ss << "{" << elem;
      first = false;
    } else {
      ss << ", " << elem;
    }
  }
  ss << "}";
  return ss.str();
}
