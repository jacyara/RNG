#include "SamplerMyImpl1.h"
#include "SamplerMyImpl1.cpp"
#include <cstdio>

int main() {
	// SamplerMyImpl1::MyRNG_Parameters params = { 0, 2147483648, 1103515245, 12345}; // seed, modulus, multiplier, increment
	// SamplerMyImpl1::MyRNG_Parameters params = { seed: 0, modulus: 2147483648, multiplier: 1103515245, increment: 12345}; // seed, module, multiplier, increment
	// Sampler_if::RNG_Parameters params = {0}; // seed = 0

	SamplerMyImpl1::MyRNG_Parameters params;

	params.seed = 0;
	params.modulus = 2147483648;
	params.multiplier = 1103515245;
	params.increment = 12345;

	SamplerMyImpl1 sampler;

	sampler.setRNGparameters(params);

	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());

	return 0;
}
