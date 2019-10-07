/**
 * @file        main.cpp
 * @author      Umang Rastogi 
 * @copyright   3-clause BSD
 * @date        10/06/2019
 * @version     1.0
 *
 * @brief       This is the main test file
 */

#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
