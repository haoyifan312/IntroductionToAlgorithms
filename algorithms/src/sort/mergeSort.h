#pragma once
#include <vector>

namespace sort
{
	void merge(std::vector<int>& v, size_t p, size_t q, size_t r);

	void mergeSort(std::vector<int>& v, size_t p, size_t r);
}