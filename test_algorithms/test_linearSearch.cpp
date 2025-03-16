#include "pch.h"
#include "search/search.h"
#include "random/random.h"

TEST(TestLinearSearch, TestLinearSearch) 
{
	std::vector<int> numbers = { 3, 2, 5, 8, 4 };

	for (int i = 0; i < numbers.size(); ++i)
	{
		EXPECT_EQ(linearSearch(numbers, numbers[i]), i);
	}
	EXPECT_EQ(linearSearch(numbers, 10), -1);
}


TEST(TestBinaryAdd, TestBinaryAdd)
{
	std::vector<bool> a = { false, true, false, true };
	std::vector<bool> b = { true, false, true, true };


	auto added = addBinary(a, b);
	EXPECT_EQ(added, std::vector<bool>({ true, false, false, false, false }));
}