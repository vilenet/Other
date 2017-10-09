#include <gtest/gtest.h>
#include "PrimeNum.h"

//!!!!! here of course I need to add more tests !!!!!

class TestPrimeNum : public ::testing::Test{
protected:
	void SetUp(){
		pNum = new PrimeNum("test.XML");
	}
	void TearDown(){
		delete pNum;
	}
	PrimeNum *pNum;
};

TEST_F(TestPrimeNum, test1){
	ASSERT_NE(pNum->pageExists(), false);
}
