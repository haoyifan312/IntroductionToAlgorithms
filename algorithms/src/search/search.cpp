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
