/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1, actual);
	int case1;
}

TEST(PasswordTest, leadingPass1)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZzZ");
	ASSERT_EQ(1, actual);
	int case1;
}

TEST(PasswordTest, leadingFail1)
{
	Password my_password;
	int actual = my_password.count_leading_characters("ZZZ");
	ASSERT_EQ(1, actual);
	int case1;
}

TEST(PasswordTest, mixedFail1) {
	Password myPassword;
	bool valueReturned = myPassword.has_mixed_case("bloom");
	ASSERT_TRUE(valueReturned);
	int case2;
}

TEST(PasswordTest, mixedFail2) {
	Password myPassword;
	bool valueReturned = myPassword.has_mixed_case("zoom");
	ASSERT_TRUE(valueReturned);
	int case2;
}

TEST(PasswordTest, mixedPass1) {
	Password myPassword;
	bool valueReturned = myPassword.has_mixed_case("Bloom");
	ASSERT_TRUE(valueReturned);
	int case2;
}

TEST(PasswordTest, mixedPass2) {
	Password myPassword;
	bool valueReturned = myPassword.has_mixed_case("blooM");
	ASSERT_TRUE(valueReturned);
	int case2;
}