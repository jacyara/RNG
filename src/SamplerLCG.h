/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerLCG.h
 * Author: cancian
 *
 * Created on 23 de Agosto de 2018, 13:08
 */

#ifndef SamplerLCG_H
#define SamplerLCG_H

#include <cstdint>
#include "Sampler_if.h"

class SamplerLCG : public Sampler_if {
public:

	struct MyRNG_Parameters : public RNG_Parameters {
		uint64_t seed;
		uint64_t modulus;
		uint64_t multiplier;
		uint64_t increment;
	};
public:
	SamplerLCG();
	SamplerLCG(const SamplerLCG& orig);
	~SamplerLCG();
public: // probability distributions
	double random();
	double sampleUniform(double min, double max);
	double sampleExponential(double mean);
	double sampleErlang(double mean, int M);
	double sampleNormal(double mean, double stddev);
	double sampleGamma(double mean, double alpha);
	double sampleBeta(double alpha, double beta, double infLimit, double supLimit);
	double sampleWeibull(double alpha, double scale);
	double sampleLogNormal(double mean, double stddev);
	double sampleTriangular(double min, double mode, double max);
	double sampleDiscrete(double value, double acumProb, ...);
public:
	void setRNGparameters(RNG_Parameters* param);
	RNG_Parameters* getRNGparameters() const;
private:
	MyRNG_Parameters* _param = new MyRNG_Parameters();

};

#endif /* SamplerLCG_H */

