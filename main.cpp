#include <iostream>
#include <stdint.h>
#include <stdio.h>

#include "main.hpp"

#define m 2147483648    // Parameters used by GCC, as seen in:
#define a 1103515245    // https://en.wikipedia.org/wiki/Linear_congruential_generator
#define c 12345


int main(int argc, char* argv[]) {
  // std::cout << "Linear congruential generator:" << std::endl;
  // lcg(10);

  std::cout << "Fibonacci linear-feedback shift register:" << std::endl;
  flfsr(10);

  return 0;
}

int lcg(int x) {    // Linear congruential generator
  unsigned long randomNumber;
  unsigned long seed = 0;

  for (int i = 0; i < x; i++) {
    randomNumber = (a * seed + c) % m;
    seed = randomNumber;
    printf("%d\n", randomNumber);
  }

  return 0;
}

int flfsr(int x) {   // Fibonacci linear-feedback shift register
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

      printf("%d (%d)\n", lfsr, counter);
  } while (counter < x && lfsr != initial_state);

  return 0;
}
