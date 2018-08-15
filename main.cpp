#include <iostream>
#include <math.h>

using namespace std;

#define m 2147483648
#define a 214013
#define c 2531011

// https://en.wikipedia.org/wiki/Linear_congruential_generator
// https://www.sanfoundry.com/cpp-program-implement-linear-congruential-generator-pseudo-random-number-generation/

int main(int argc, char* argv[])
{
    unsigned long randomNumber = a * m;
    randomNumber = randomNumber + c;
    randomNumber = randomNumber % m;

    unsigned long temp = randomNumber >> 16;
 
    cout << temp << endl;

    // for (int x = 0; x < 10; x++)
    //     cout << ms_rnd.rnd() << endl;
 
    return 0;
}