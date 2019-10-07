/**
 * @file        AnalogSensor.hpp
 * @author      Umang Rastogi 
 * @copyright   3-clause BSD
 * @date        10/06/2019
 * @version     1.0
 *
 * @brief       Header file for analog sensor library
 */

#pragma once

#include <iostream>
#include <numeric>
#include <vector>

class AnalogSensor {
	public:
		/**
		 * @brief    constructor for the AnalogSensor Class
		 * @param    no. of samples to evaluate the average reading
		 * @return   none
		 */
	    explicit AnalogSensor(unsigned int samples);

	    /**
		 * @brief    destructor for the AnalogSensor Class
		 * @param    none
		 * @return   none
		 */
	    ~AnalogSensor();

	    /**
		 * @brief    accumulate readings from the sensor
		 * @param    none
		 * @return   average reading from the sensor
		 */
	    int Read();

	private:
	    unsigned int mSamples;
	    std::vector<int> *readings;
};
