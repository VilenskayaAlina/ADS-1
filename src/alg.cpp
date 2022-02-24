// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  uint64_t del = 0;
  if (value > 1) {
    for (uint64_t i = 1; i <= value; ++i) {
      if (value % i == 0)
        ++del;
    }
    if (del == 2) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  uint64_t i = 0;
  for (uint64_t poz = 2; true; poz++) {
    if (checkPrime(poz)) {
      ++i;
    }
    if (n == i) {
      return poz;
    }
  }
}

uint64_t nextPrime(uint64_t value) {
  for (++value; true; value++) {
    if (checkPrime(value))
      return value;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  uint64_t i = 0;
  for (i; hbound > i; i++) {
    if (checkPrime(i))
      sum += i;
  }
  return sum;
}
