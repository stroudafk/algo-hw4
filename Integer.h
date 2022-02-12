#pragma once

#include <cstdint>
#include <string>
#include <vector>

struct Integer {
  // default constructor
  Integer() : digits_({0}) {}

  // convenient conversion constructor
  Integer(uint64_t value);
  Integer(std::string value);
  Integer(const std::vector<uint8_t>& digits) : digits_(digits) {}

  bool isValid() const;
  std::string toString() const;

  bool operator==(const Integer& other) const {
    return digits_ == other.digits_;
  }

  // digits in base 10, from the lowest digit to the highest, i.e., the digits_
  // vector for 123 would be {3, 2, 1}.
  std::vector<uint8_t> digits_;
};

Integer basicMult(const Integer& lhs, const Integer& rhs);
Integer karatsubaMult(const Integer& lhs, const Integer& rhs);