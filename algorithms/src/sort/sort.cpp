#include "sort.h"

void intro_algs::mergSort(std::vector<int>& v, std::function<bool(int, int)> compare)
{
	if (v.size() <= 1)
		return;

	for (size_t j = 1; j < v.size(); ++j)
	{
		const auto key = v[j];
		int i = j - 1;
		while (i >= 0 && compare(v[i], key))
		{
			v[i + 1] = v[i];
			i--;
		}
		v[i + 1] = key;
	}

}
