#pragma once
#include <vector>
#include <functional>

namespace intro_algs
{
	void mergSort(std::vector<int>& v, std::function<bool(int, int)> compare= [](auto a, auto b) { return a > b; });
}
