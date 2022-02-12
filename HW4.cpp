#include "HW4.h"

#include <random>
#include <sstream>

std::string getTxstId() {
  // TODO change this to your TXST ID (should begin with "A")
  return "";
}

std::vector<std::vector<int>> callsToMystery() {
  return {
    // Fill in your recursive calls as vectors here
    // For example, a call to mystery([4, 5, 3, 9, 7, 1, 3], 3) would start
    // with
    // {4, 5, 3, 9, 7, 1, 3, 3},
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
