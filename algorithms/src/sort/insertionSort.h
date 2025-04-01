#pragma once
#include <vector>
#include <functional>

namespace sort
{
	void insertionSort(std::vector<int>& v, std::function<bool(int, int)> compare= [](auto a, auto b) { return a > b; });
	void insertAndMoveDown(std::vector<int>& v, const int insertionIndex, const int key, int lastSortedIndex);
	const int getInsertionIndex(int i, std::function<bool(int, int)>& compare, std::vector<int>& v, const int key);
	const int getInsertionIndexBinarySearch(int begin, int end, std::function<bool(int, int)>& compare, std::vector<int>& v, const int key);
}
