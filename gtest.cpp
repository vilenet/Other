#include <iostream>
#include <gtest\gtest.h>
using namespace std;

struct BankAcccount
{
	int balance;
	BankAcccount() {}
	explicit BankAcccount(const int bal): balance(bal) {}
};

TEST(AccountTest, BankAccountStartsEmpty)
{
	BankAcccount account;
	EXPECT_EQ(0, account.balance);
}

int main(int argc, char* argv[])
{
	cout << "hello\n";

	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}
