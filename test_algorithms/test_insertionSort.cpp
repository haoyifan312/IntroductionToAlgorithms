#include "pch.h"
#include "sort\insertionSort.h"

using namespace sort;

TEST(TestInsertionSort, TestInsertionSortBasic) {
	std::vector<int> numbers = { 5, 2, 4, 6, 1, 3 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	insertionSort(numbers);
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestInsertionSort, TestInsertionSortDecreasing) {
	std::vector<int> numbers = { 5, 2, 4, 6, 1, 3 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end(), std::greater<int>());
	insertionSort(numbers, [](auto a, auto b) {return a < b; });
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestInsertionSort, TestInsertionSortWithSame) {
	std::vector<int> numbers = { 31, 41, 59, 26, 41, 58};
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	insertionSort(numbers);

	EXPECT_EQ(numbers, numbers_sorted);
}