#include "pch.h"
#include "sort\sort.h"

using namespace intro_algs;

TEST(TestMergeSort, TestMergeSortBasic) {
	std::vector<int> numbers = { 5, 2, 4, 6, 1, 3 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	mergSort(numbers);
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestMergeSort, TestMergeSortDecreasing) {
	std::vector<int> numbers = { 5, 2, 4, 6, 1, 3 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end(), std::greater<int>());
	mergSort(numbers, [](auto a, auto b) {return a < b; });
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestMergeSort, TestMergeSortWithSame) {
	std::vector<int> numbers = { 31, 41, 59, 26, 41, 58};
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	mergSort(numbers);

	EXPECT_EQ(numbers, numbers_sorted);
}