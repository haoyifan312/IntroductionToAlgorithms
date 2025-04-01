#include "insertionSort.h"

void sort::insertionSort(std::vector<int>& v, std::function<bool(int, int)> compare)
{
	if (v.size() <= 1)
		return;

	for (size_t j = 1; j < v.size(); ++j)
	{
		const auto key = v[j];
		int lastSortedIndex = (int)j - 1;
		const int insertionIndex = getInsertionIndexBinarySearch(0, lastSortedIndex, compare, v, key);
		insertAndMoveDown(v, insertionIndex, key, (int)j);
	}

}

void sort::insertAndMoveDown(std::vector<int>& v, const int insertionIndex, const int key, int lastSortedIndex)
{
	int lastTemp = v[insertionIndex + 1];
	v[insertionIndex + 1] = key;
	// move everything 1 forward
	for (size_t k = insertionIndex + 2; k <= lastSortedIndex; ++k)
	{
		int newTemp = v[k];
		v[k] = lastTemp;
		lastTemp = newTemp;
	}
}

const int sort::getInsertionIndex(int i, std::function<bool(int, int)>& compare, std::vector<int>& v, const int key)
{
	while (i >= 0 && compare(v[i], key))
	{
		i--;
	}
	return i;
}

const int sort::getInsertionIndexBinarySearch(int begin, int end, std::function<bool(int, int)>& compare, std::vector<int>& v, const int key)
{
	if (end == begin)
		return !compare(v[begin], key) ? begin : begin-1;
	
	const int mid = (end + begin) / 2 ;
	if (!compare(v[mid], key) && compare(v[mid + 1], key))
		return mid;
	else if (!compare(v[mid], key))
		return getInsertionIndexBinarySearch(mid+1, end, compare, v, key);
	else
		return getInsertionIndexBinarySearch(begin, mid-1, compare, v, key);
}
