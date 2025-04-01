#include "mergeSort.h"

void sort::merge(std::vector<int>& v, size_t p, size_t q, size_t r)
{
	std::vector<int> left(q - p + 1);
	std::vector<int> right(r - q);

	for (size_t i = 0; i <= q - p ; ++i)
		left[i] = v[p+i];
	for (size_t i = 0; i < r - q; ++i)
		right[i] = v[q+i+1];

	size_t j = 0;
	size_t k = 0;
	for (size_t i = p; i <= r; ++i)
	{
		if (j == (int)left.size())
			v[i] = right[k++];
		else if (k == (int)right.size())
			v[i] = left[j++];
		else if (left[j] < right[k])
			v[i] = left[j++];
		else
			v[i] = right[k++];
	}
}

void sort::mergeSort(std::vector<int>& v, size_t p, size_t r)
{
	if (p < r)
	{
		size_t q = (p + r) / 2;
		mergeSort(v, p, q);
		mergeSort(v, q + 1, r);
		merge(v, p, q, r);
	}
}
