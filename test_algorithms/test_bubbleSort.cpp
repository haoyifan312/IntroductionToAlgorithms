#include "pch.h"
#include "sort\BubbleSort.h"

using namespace sort;

TEST(TestBubbleSort, TestBubbleSortBasic) {
	std::vector<int> numbers = { 5, 2, 4, 6, 1, 3 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	bubbleSort(numbers);
	EXPECT_EQ(numbers, numbers_sorted);
}
TEST(TestBubbleSort, TestBubbleSortWithSame) {
	std::vector<int> numbers = { 31, 41, 59, 26, 41, 58 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	bubbleSort(numbers);

	EXPECT_EQ(numbers, numbers_sorted);
}