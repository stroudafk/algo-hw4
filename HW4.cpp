#include "HW4.h"

#include <random>
#include <sstream>

std::string getTxstId() {
  // TODO change this to your TXST ID (should begin with "A")
  return "A04955601";

}

std::vector<std::vector<int>> callsToMystery() {
  // Fill in your recursive calls as vectors here
  // For example, a call to mystery([4, 5, 3, 9, 7, 1, 3]  3) would start
  // with
  // {4, 5, 3, 9, 7, 1, 3, 3},
  return {{44, 76, 16, 67, 30, 47, 0, 87, 6, 38, 5}};
}


// Your input array for Q1 is 
// {44, 76, 16, 67, 30, 47, 0, 87, 6, 38}
// Your first row should be 
// {44, 76, 16, 67, 30, 47, 0, 87, 6, 38, 5}


//Explanation  
// recursive iteration 1
// k = 5
// pivot = 44
// {16, 30, 0, 6, 38} {44} {76, 67, 47, 87}
// take the else if route, as 5 + 1 = 6 and > 5
// return 16

//test "A00000000"
// Your input array for Q1 is {38, 41, 47, 65, 4, 32, 49, 12, 59, 16}
// Your first row should be {38, 41, 47, 65, 4, 32, 49, 12, 59, 16, 5}
// pivot 38
// k = 5
// {4, 32, 12, 16}
// {38}
// {41, 47, 65, 49, 59}

// pivot = 41
// k = 0
// {}{41}{47, 65, 49, 59}

// return 41

//callsToMystery returns {{38, 41, 47, 65, 4, 32, 49, 12, 59, 16, 5}, {41,47,65,49,59,0}};


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
