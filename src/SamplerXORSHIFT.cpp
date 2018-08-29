/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this randomNumberlate file, choose Tools | randomNumberlates
 * and open the randomNumberlate in the editor.
 */

/* 
 * File:   SamplerXORSHIFT.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 13:08
 */

#include "SamplerXORSHIFT.h"
#include <iostream> //remove

SamplerXORSHIFT::SamplerXORSHIFT() {
}

SamplerXORSHIFT::SamplerXORSHIFT(const SamplerXORSHIFT& orig) {
}

SamplerXORSHIFT::~SamplerXORSHIFT() {
}

double SamplerXORSHIFT::random() {
	uint32_t randomNumber = _param->seed;

	randomNumber ^= randomNumber << 13;
	randomNumber ^= randomNumber >> 17;
	randomNumber ^= randomNumber << 5;
	_param->seed = randomNumber;

  return (double)randomNumber;
}

double SamplerXORSHIFT::sampleUniform(double min, double max) {
}

double SamplerXORSHIFT::sampleExponential(double mean) {
}

double SamplerXORSHIFT::sampleErlang(double mean, int M) {
}

double SamplerXORSHIFT::sampleNormal(double mean, double stddev) {
}

double SamplerXORSHIFT::sampleGamma(double mean, double alpha) {
}

double SamplerXORSHIFT::sampleBeta(double alpha, double beta, double infLimit, double supLimit) {
}

double SamplerXORSHIFT::sampleWeibull(double alpha, double scale) {
}

double SamplerXORSHIFT::sampleLogNormal(double mean, double stddev) {
}

double SamplerXORSHIFT::sampleTriangular(double min, double mode, double max) {
}

double SamplerXORSHIFT::sampleDiscrete(double value, double acumProb, ...) {
}

void SamplerXORSHIFT::setRNGparameters(SamplerXORSHIFT::RNG_Parameters* param){
	_param = param;
}

SamplerXORSHIFT::RNG_Parameters* SamplerXORSHIFT::getRNGparameters() const {
	return _param; 
}
