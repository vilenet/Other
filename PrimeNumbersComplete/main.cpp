/******************************************************************************
* Compiled with - Code::Blocks 16.01.  TDM-CCC-32.  C++11.  gmock 1.7.        *
*                                                                             *
******************************************************************************/

#include <gtest/gtest.h>
#include "PrimeNum.h"

int main(int argc, char *argv[])
{

  PrimeNum pNum("test.XML");
  pNum.run();

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();

  cin.get();
}
