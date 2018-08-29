#include "SamplerLCG.cpp"
#include "SamplerLFSR.cpp"

#include <cstdio>

int main() {
	/* SamplerLCG::MyRNG_Parameters* params = new SamplerLCG::MyRNG_Parameters();
	params->seed = 0;
	params->modulus = 2147483648;
	params->multiplier = 1103515245;
	params->increment = 12345;

	SamplerLCG sampler;
	sampler.setRNGparameters(params);

	printf("--- LCG ---\n");
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random()); */


	SamplerLFSR::MyRNG_Parameters* params = new SamplerLFSR::MyRNG_Parameters();
	params->seed = 0x7f2a;

	SamplerLFSR sampler;
	sampler.setRNGparameters(params);

	printf("--- LFSR ---\n");
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());

	return 0;
}
