/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerLCG.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 13:08
 */

#include "SamplerLCG.h"
#include <iostream> //remove

SamplerLCG::SamplerLCG() {
}

SamplerLCG::SamplerLCG(const SamplerLCG& orig) {
}

SamplerLCG::~SamplerLCG() {
}

double SamplerLCG::random() {
	uint64_t randomNumber;

	randomNumber = (_param->multiplier * _param->seed + _param->increment) % _param->modulus;
    _param->seed = randomNumber;

    return (double)randomNumber;
}

double SamplerLCG::sampleUniform(double min, double max) {
}

double SamplerLCG::sampleExponential(double mean) {
}

double SamplerLCG::sampleErlang(double mean, int M) {
}

double SamplerLCG::sampleNormal(double mean, double stddev) {
}

double SamplerLCG::sampleGamma(double mean, double alpha) {
}

double SamplerLCG::sampleBeta(double alpha, double beta, double infLimit, double supLimit) {
}

double SamplerLCG::sampleWeibull(double alpha, double scale) {
}

double SamplerLCG::sampleLogNormal(double mean, double stddev) {
}

double SamplerLCG::sampleTriangular(double min, double mode, double max) {
}

double SamplerLCG::sampleDiscrete(double value, double acumProb, ...) {
}

void SamplerLCG::setRNGparameters(SamplerLCG::RNG_Parameters* param){
	_param = param;
}

SamplerLCG::RNG_Parameters* SamplerLCG::getRNGparameters() const {
	return _param; 
}
