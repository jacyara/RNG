#include <iostream>
#include <stdint.h>
#include <stdio.h>

#include "main.hpp"

int main() {
  printf("Linear congruential generator:\n");
  lcg(10);

  printf("Fibonacci linear-feedback shift register:\n");
  flfsr(10);

  return 0;
}

int lcg(int x) {    // Linear congruential generator
  // Values used in GCC
  const uint64_t m = 2147483648;
  const uint64_t a = 1103515245;
  const uint64_t c = 12345;

  uint64_t randomNumber;
  uint64_t seed = 0;

  for (int i = 1; i <= x; i++) {
    randomNumber = (a * seed + c) % m;
    seed = randomNumber;
    printf("%u (%u)\n", randomNumber, i);
  }

  return 0;
}

int flfsr(int x) {  // Fibonacci linear-feedback shift register
  // Any value different than zero
  uint16_t initial_state = 0x7f2a;  
  uint16_t lfsr = initial_state;

  // We only use a single bit, but we store 16 as to allow us to shift 15 bits later
  uint16_t bit;
  int counter = 0;

  do {
      // x^16 + x^14 + x^13 + x^11 + 1
      bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;

      // pseudo-random number
      lfsr = (lfsr >> 1) | (bit << 15);

      counter++;

      printf("%u (%u)\n", lfsr, counter);
  } while (counter < x && lfsr != initial_state);

  return 0;
}

int msws(int x) {   // Middle square Weyl sequence generator

  return 0;
}
