#pragma once
#include <vector>

const int linearSearch(const std::vector<int>& v, const int target);
const int binarySearchByWhile(const std::vector<int>& v, const int target, size_t l, size_t h);
const int binarySearchByRecursion(const std::vector<int>& v, const int target, const size_t l, const size_t h);