/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerLFSR.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 13:08
 */

#include "SamplerLFSR.h"
#include <iostream> //remove

SamplerLFSR::SamplerLFSR() {
}

SamplerLFSR::SamplerLFSR(const SamplerLFSR& orig) {
}

SamplerLFSR::~SamplerLFSR() {
}

double SamplerLFSR::random() {
	uint16_t lfsr = _param->seed;
	uint16_t bit;
	uint16_t randomNumber;

	// x^16 + x^14 + x^13 + x^11 + 1
  bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
	
	randomNumber = (lfsr >> 1) | (bit << 15);
  _param->seed = randomNumber;

	return (double)randomNumber;
}

double SamplerLFSR::sampleUniform(double min, double max) {
}

double SamplerLFSR::sampleExponential(double mean) {
}

double SamplerLFSR::sampleErlang(double mean, int M) {
}

double SamplerLFSR::sampleNormal(double mean, double stddev) {
}

double SamplerLFSR::sampleGamma(double mean, double alpha) {
}

double SamplerLFSR::sampleBeta(double alpha, double beta, double infLimit, double supLimit) {
}

double SamplerLFSR::sampleWeibull(double alpha, double scale) {
}

double SamplerLFSR::sampleLogNormal(double mean, double stddev) {
}

double SamplerLFSR::sampleTriangular(double min, double mode, double max) {
}

double SamplerLFSR::sampleDiscrete(double value, double acumProb, ...) {
}

void SamplerLFSR::setRNGparameters(SamplerLFSR::RNG_Parameters* param){
	_param = param;
}

SamplerLFSR::RNG_Parameters* SamplerLFSR::getRNGparameters() const {
	return _param; 
}
