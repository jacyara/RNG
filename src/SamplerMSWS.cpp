/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SamplerMSWS.cpp
 * Author: cancian
 * 
 * Created on 23 de Agosto de 2018, 13:08
 */

#include "SamplerMSWS.h"
#include <iostream> //remove

SamplerMSWS::SamplerMSWS() {
}

SamplerMSWS::SamplerMSWS(const SamplerMSWS& orig) {
}

SamplerMSWS::~SamplerMSWS() {
}

double SamplerMSWS::random() {
	x *= x; 
  x += (w += _param->seed); 
  x = (x>>32) | (x<<32);

  return (double)x;
}

double SamplerMSWS::sampleUniform(double min, double max) {
}

double SamplerMSWS::sampleExponential(double mean) {
}

double SamplerMSWS::sampleErlang(double mean, int M) {
}

double SamplerMSWS::sampleNormal(double mean, double stddev) {
}

double SamplerMSWS::sampleGamma(double mean, double alpha) {
}

double SamplerMSWS::sampleBeta(double alpha, double beta, double infLimit, double supLimit) {
}

double SamplerMSWS::sampleWeibull(double alpha, double scale) {
}

double SamplerMSWS::sampleLogNormal(double mean, double stddev) {
}

double SamplerMSWS::sampleTriangular(double min, double mode, double max) {
}

double SamplerMSWS::sampleDiscrete(double value, double acumProb, ...) {
}

void SamplerMSWS::setRNGparameters(SamplerMSWS::RNG_Parameters* param){
	_param = param;
}

SamplerMSWS::RNG_Parameters* SamplerMSWS::getRNGparameters() const {
	return _param; 
}
