#include "SamplerLCG.cpp"
#include "SamplerLFSR.cpp"
#include "SamplerMSWS.cpp"
#include "SamplerMWC.cpp"
#include "SamplerXORSHIFT.cpp"

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



	/* SamplerLFSR::MyRNG_Parameters* params = new SamplerLFSR::MyRNG_Parameters();
	params->seed = 0x7f2a;

	SamplerLFSR sampler;
	sampler.setRNGparameters(params);

	printf("--- LFSR ---\n");
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random()); */



	/* SamplerMSWS::MyRNG_Parameters* params = new SamplerMSWS::MyRNG_Parameters();
	params->seed = 0xb5ad4eceda1ce2a9;

	SamplerMSWS sampler;
	sampler.setRNGparameters(params);

	printf("--- MSWS ---\n");
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random()); */



	/* SamplerXORSHIFT::MyRNG_Parameters* params = new SamplerXORSHIFT::MyRNG_Parameters();
	params->seed = 548787455;

	SamplerXORSHIFT sampler;
	sampler.setRNGparameters(params);

	printf("--- XORSHIFT ---\n");
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random()); */
	
	

	SamplerMWC::MyRNG_Parameters* params = new SamplerMWC::MyRNG_Parameters();
	params->base = 10;
	params->mult = 7;

	SamplerMWC sampler;
	sampler.setRNGparameters(params);

	printf("--- MWC ---\n");
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random());
	printf("%.0f\n",sampler.random()); 



	return 0;
}
