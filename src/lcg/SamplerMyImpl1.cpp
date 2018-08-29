/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerMyImpl1.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 13:08
 */

#include "SamplerMyImpl1.h"
#include <cstdint>

SamplerMyImpl1::SamplerMyImpl1() {
	myParams.seed = 0;
	myParams.modulus = 2147483648;
	myParams.multiplier = 1103515245;
	myParams.increment = 12345;

	// myParams.seed = 0;
	// myParams.module = 0;
	// myParams.multiplier = 0;
	// myParams.increment = 0;
}

SamplerMyImpl1::SamplerMyImpl1(const SamplerMyImpl1& orig) {
}

SamplerMyImpl1::~SamplerMyImpl1() {
}

double SamplerMyImpl1::random() {
	uint64_t randomNumber;

	randomNumber = (myParams.multiplier * myParams.seed + myParams.increment) % myParams.modulus;
    myParams.seed = randomNumber;

    return (double)randomNumber;
}

double SamplerMyImpl1::sampleUniform(double min, double max) {
}

double SamplerMyImpl1::sampleExponential(double mean) {
}

double SamplerMyImpl1::sampleErlang(double mean, int M) {
}

double SamplerMyImpl1::sampleNormal(double mean, double stddev) {
}

double SamplerMyImpl1::sampleGamma(double mean, double alpha) {
}

double SamplerMyImpl1::sampleBeta(double alpha, double beta, double infLimit, double supLimit) {
}

double SamplerMyImpl1::sampleWeibull(double alpha, double scale) {
}

double SamplerMyImpl1::sampleLogNormal(double mean, double stddev) {
}

double SamplerMyImpl1::sampleTriangular(double min, double mode, double max) {
}

double SamplerMyImpl1::sampleDiscrete(double value, double acumProb, ...) {
}

void SamplerMyImpl1::setRNGparameters(SamplerMyImpl1::RNG_Parameters param) {
	myParams.seed = param.seed;
	// MyRNG_Parameters temp = static_cast<MyRNG_Parameters>(param);

	// myParams.seed = (MyRNG_Parameters)(param).seed;
	// myParams.module = (MyRNG_Parameters)(param).module;
	// myParams.multiplier = (MyRNG_Parameters)(param).multiplier;
	// myParams.increment = (MyRNG_Parameters)(param).increment;

}

SamplerMyImpl1::RNG_Parameters SamplerMyImpl1::getRNGparameters() const {
	
}
