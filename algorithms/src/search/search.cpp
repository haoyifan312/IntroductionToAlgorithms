#include "search.h"

const int linearSearch(const std::vector<int>& v, const int target)
{
	for (int i = 0; i < v.size(); ++i)
	{
		if (v[i] == target)
			return i;
	}

	return -1;
}

const int binarySearchByWhile(const std::vector<int>& v, const int key, size_t l, size_t h)
{
	if (h < l)
		return -1;
	if (h == l)
		return l == key ? l : -1;

	while (h >= l)
	{
		if (h == l)
			return l == key ? l : -1;
		size_t m = (l + h) / 2;
		if (v[m] > key)
			h = m - 1;
		else if (v[m] < key)
			l = m + 1;
		else
			return m;
	}

	return -1;
}

const int binarySearchByRecursion(const std::vector<int>& v, const int key, const size_t l, const size_t h)
{
	if (h < l)
		return -1;
	else if (h == l)
		return l == key ? l : -1;

	const size_t m = (l + h) / 2;
	if (v[m] > key)
		return binarySearchByRecursion(v, key, l, m - 1);
	else if (v[m] < key)
		return binarySearchByRecursion(v, key, m + 1, h);
	else
		return m;

	return -1;
}
