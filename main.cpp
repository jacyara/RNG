#include <iostream>
#include <math.h>

#define m 2147483648    // Parameters used by GCC, as seen in:
#define a 1103515245    // https://en.wikipedia.org/wiki/Linear_congruential_generator
#define c 12345

using namespace std;

int main(int argc, char* argv[])
{
    unsigned long randomNumber;
    unsigned long seed = 0;

    for (int x = 0; x < 10; x++) {
        randomNumber = (a * seed + c) % m;
        seed = randomNumber;
        cout << (randomNumber) << endl;
    }
 
    return 0;
}
