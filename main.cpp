#include <iostream>
#include "main.hpp"

#define m 2147483648    // Parameters used by GCC, as seen in:
#define a 1103515245    // https://en.wikipedia.org/wiki/Linear_congruential_generator
#define c 12345


int main(int argc, char* argv[]) {
    lcg(15);
    return 0;
}

int lcg(int x) {    // Linear congruential generator
    unsigned long randomNumber;
    unsigned long seed = 0;

    for (int i = 0; i < x; i++) {
        randomNumber = (a * seed + c) % m;
        seed = randomNumber;
        std::cout << (randomNumber) << std::endl;
    }
 
    return 0;
}
