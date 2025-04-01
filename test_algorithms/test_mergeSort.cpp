#include "pch.h"
#include "sort\mergeSort.h"

using namespace sort;

TEST(TestMergeSort, TestMergeFull) {
	std::vector<int> numbers = { 1, 3, 5, 7, 2, 4, 6, 8 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	mergeCount(numbers, 0, 3, 7);
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestMergeSort, TestMergePartial) {
	std::vector<int> numbers = { 11, 1, 3, 5, 7, 2, 4, 6, 8, 3, 5 };
	mergeCount(numbers, 1, 4, 8);
	EXPECT_EQ(numbers, std::vector<int>({ 11, 1, 2, 3, 4, 5, 6, 7, 8, 3, 5 }));
}

TEST(TestMergeSort, TestMergeSortFull) {
	std::vector<int> numbers = { 1, 3, 5, 7, 2, 4, 6, 8 };
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	mergeSortCount(numbers, 0, 7);
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestMergeSort, TestMergeSortPartial) {
	std::vector<int> numbers = { 11, 1, 3, 5, 7, 2, 4, 6, 8, 3, 5 };
	mergeSortCount(numbers, 0, numbers.size()-1);
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	EXPECT_EQ(numbers, numbers_sorted);
}

TEST(TestMergeSort, TestMergeSortCount) {
	std::vector<int> numbers = { 4, 3, 2, 1 };
	const size_t mergeCount = mergeSortCount(numbers, 0, numbers.size() - 1);
	auto numbers_sorted = numbers;
	std::sort(numbers_sorted.begin(), numbers_sorted.end());
	EXPECT_EQ(numbers, numbers_sorted);
	EXPECT_EQ(mergeCount, 6);
}