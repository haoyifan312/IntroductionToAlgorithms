#include "mergeSort.h"

const size_t sort::mergeCount(std::vector<int>& v, size_t p, size_t q, size_t r)
{
	std::vector<int> left(q - p + 1);
	std::vector<int> right(r - q);

	for (size_t i = 0; i <= q - p ; ++i)
		left[i] = v[p+i];
	for (size_t i = 0; i < r - q; ++i)
		right[i] = v[q+i+1];

	size_t j = 0;
	size_t k = 0;
	size_t ret = 0;
	for (size_t i = p; i <= r; ++i)
	{
		if (j == (int)left.size())
		{
			v[i] = right[k++];
		}
		else if (k == (int)right.size())
		{
			v[i] = left[j++];
		}
		else if (left[j] < right[k])
		{
			v[i] = left[j++];
		}
		else
		{
			v[i] = right[k++];
			ret += left.size() - j;
		}
	}
	return ret;
}

const size_t sort::mergeSortCount(std::vector<int>& v, size_t p, size_t r)
{
	size_t ret = 0;
	if (p < r)
	{
		size_t q = (p + r) / 2;
		ret += mergeSortCount(v, p, q);
		ret += mergeSortCount(v, q + 1, r);
		ret += mergeCount(v, p, q, r);
	}
	return ret;
}
