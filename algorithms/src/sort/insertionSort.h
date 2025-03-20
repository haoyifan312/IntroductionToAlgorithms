#pragma once
#include <vector>
#include <functional>

namespace sort
{
	void insertionSort(std::vector<int>& v, std::function<bool(int, int)> compare= [](auto a, auto b) { return a > b; });
}
