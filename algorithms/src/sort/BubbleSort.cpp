#include "BubbleSort.h"

using namespace sort;

void sort::bubbleSort(std::vector<int>& v)
{
	for (size_t i = 0; i < v.size(); ++i)
	{
		for (int j = v.size() - 1; j > i; --j)
		{
			if (v[j] < v[j - 1])
			{
				const auto temp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = temp;
			}
		}
	}
}
