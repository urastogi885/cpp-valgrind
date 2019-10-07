/**
 * @file        AnalogSensor.cpp
 * @author      Umang Rastogi 
 * @copyright   3-clause BSD
 * @date        10/06/2019
 * @version     1.0
 *
 * @brief       Generates average reading from sensor
 */

#include <AnalogSensor.hpp>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples) {
}

AnalogSensor::~AnalogSensor() {
	delete(readings);
}

int AnalogSensor::Read() {
    readings = new std::vector<int>(mSamples, 10);

    double result = std::accumulate(readings->begin(), \
    	readings->end(), 0.0) / readings->size();
    return result;
}
