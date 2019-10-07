/**
 * @file        main.cpp
 * @author      Umang Rastogi 
 * @copyright   3-clause BSD
 * @date        10/06/2019
 * @version     1.0
 *
 * @brief       Outputs average reading from sensor
 */

#include <iostream>
#include <AnalogSensor.hpp>

int main() {
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if (terminator) {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
