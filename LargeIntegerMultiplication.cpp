#include <iostream>
#include <vector>
#include "Integer.h"


int main() {
  std::cout << "[Optional] Q7 & Q8 Extra Credit" << std::endl;
  // Uncomment this section (and add more test cases as helpful) for extra credit testing.
  Integer a0 = Integer("432");
  Integer b0 = Integer("33");
  std::string expected0 = std::to_string(432 * 33);
  Integer a1 = Integer("473284739284732987878784954898954839890383");
  Integer b1 = Integer("12309230484932849372184732817483174982379848348");
  std::string expected1 = "5825770940857131022104320384013046847726806767783232874150244228747382190857072483637284";  // from wolframalpha

  std::cout << "Q7" << std::endl;
  std::cout << "Small multiplication worked? " << (basicMult(a0, b0).toString() == expected0) << std::endl;
  std::cout << "Big multiplication worked? " << (basicMult(a1, b1).toString() == expected1) << std::endl;

  std::cout << "Q8" << std::endl;
  std::cout << "Small multiplication worked? " << (karatsubaMult(a0, b0).toString() == expected0) << std::endl;
  std::cout << "Big multiplication worked? " << (karatsubaMult(a1, b1).toString() == expected1) << std::endl;
}
