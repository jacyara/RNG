/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerMWC.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 13:08
 */

#include "SamplerMWC.h"
#include <iostream> //remove

SamplerMWC::SamplerMWC() {
	c.push_back(1);
	y.push_back(0);
}

SamplerMWC::SamplerMWC(const SamplerMWC& orig) {
}

SamplerMWC::~SamplerMWC() {
}

double SamplerMWC::random() {
	y.push_back((_param->mult * y[counter - r] + c[counter - 1]) % _param->base);
  c.push_back((_param->mult * y[counter - r] + c[counter - 1]) / _param->base);

	counter = counter + 1;

	return y[counter-1];
}

double SamplerMWC::sampleUniform(double min, double max) {
}

double SamplerMWC::sampleExponential(double mean) {
}

double SamplerMWC::sampleErlang(double mean, int M) {
}

double SamplerMWC::sampleNormal(double mean, double stddev) {
}

double SamplerMWC::sampleGamma(double mean, double alpha) {
}

double SamplerMWC::sampleBeta(double alpha, double beta, double infLimit, double supLimit) {
}

double SamplerMWC::sampleWeibull(double alpha, double scale) {
}

double SamplerMWC::sampleLogNormal(double mean, double stddev) {
}

double SamplerMWC::sampleTriangular(double min, double mode, double max) {
}

double SamplerMWC::sampleDiscrete(double value, double acumProb, ...) {
}

void SamplerMWC::setRNGparameters(SamplerMWC::RNG_Parameters* param){
	_param = param;
}

SamplerMWC::RNG_Parameters* SamplerMWC::getRNGparameters() const {
	return _param; 
}
