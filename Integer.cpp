#include "Integer.h"

#include <cassert>
#include <sstream>
#include <iostream>

Integer::Integer(uint64_t value) {
  while (value > 0) {
    digits_.emplace_back(value % 10);
    value = value / 10;
  }
  if (digits_.empty()) {
    digits_.emplace_back(0);
  }
  assert(isValid());
}

Integer::Integer(std::string value) {
  for (auto rit = value.crbegin(); rit != value.crend(); ++rit) {
    uint8_t d = (*rit) - '0';
    digits_.emplace_back(d);
  }
  assert(isValid());
}

bool Integer::isValid() const {
  if (digits_.empty()) {
    return false;
  }
  for (auto d : digits_) {
    if (d > 9) {
      return false;
    }
  }
  return digits_.back() != 0 || digits_.size() == 1;
}

std::string Integer::toString() const {
  assert(isValid());
  std::stringstream ss;
  for (auto rit = digits_.crbegin(); rit != digits_.crend(); ++rit) {
    ss << std::to_string(*rit);
  }
  return ss.str();
}

/*
 * Add your key ideas to this comment.
 * How did you approach the problem?
 * Why does your code work?
 *
 */
Integer basicMult(const Integer& lhs, const Integer& rhs) {
  throw std::logic_error("not implemented");
}

/*
 * Add your key ideas to this comment.
 * How did you approach the problem?
 * Why does your code work?
 *
 */
Integer karatsubaMult(const Integer& lhs, const Integer& rhs) {
  throw std::logic_error("not implemented");
}