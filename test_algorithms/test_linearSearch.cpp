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

TEST(TestBinarySearch, TestBinarySearchByWhile)
{
	std::vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };

	for (int i = 0; i < numbers.size(); ++i)
	{
		EXPECT_EQ(binarySearchByWhile(numbers, numbers[i], 0, numbers.size()-1), i);
	}
	EXPECT_EQ(binarySearchByWhile(numbers, 10, 0, numbers.size()-1), -1);
}

TEST(TestBinarySearch, TestBinarySearchByRecursion)
{
	std::vector<int> numbers = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };

	for (int i = 0; i < numbers.size(); ++i)
	{
		EXPECT_EQ(binarySearchByRecursion(numbers, numbers[i], 0, numbers.size() - 1), i);
	}
	EXPECT_EQ(binarySearchByRecursion(numbers, 10, 0, numbers.size() - 1), -1);
}

TEST(TestBinaryAdd, TestBinaryAdd)
{
	std::vector<bool> a = { false, true, false, true };
	std::vector<bool> b = { true, false, true, true };


	auto added = addBinary(a, b);
	EXPECT_EQ(added, std::vector<bool>({ true, false, false, false, false }));
}