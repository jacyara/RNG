/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerMWC.h
 * Author: cancian
 *
 * Created on 23 de Agosto de 2018, 13:08
 */

#ifndef SamplerMWC_H
#define SamplerMWC_H

#include <cstdint>
#include <vector>
#include "Sampler_if.h"

class SamplerMWC : public Sampler_if {
public:

	struct MyRNG_Parameters : public RNG_Parameters {
		uint64_t base;
		uint64_t mult;
	};
public:
	SamplerMWC();
	SamplerMWC(const SamplerMWC& orig);
	~SamplerMWC();
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
	std::vector<int> y;
	std::vector<int> c;
	int counter = 1;
	int r = 1;
};

#endif /* SamplerMWC_H */

