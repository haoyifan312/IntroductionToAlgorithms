#include "random.h"
#include <cassert>


const std::vector<bool> addBinary(const std::vector<bool>& a, const std::vector<bool>& b)
{
	const auto size = a.size();
	assert(a.size() == b.size());

	auto ret = std::vector<bool>(size + 1, 0);
	bool addDigit = false;
	for (int i = size - 1; i >= 0; --i)
	{
		if (a[i] && b[i])
		{
			ret[i + 1] = addDigit;
			addDigit = true;
		}
		else if (a[i] || b[i])
		{
			ret[i + 1] = !addDigit;
			addDigit = !ret[i + 1];
		}
		else
		{
			ret[i] = addDigit;
			addDigit = false;
		}
	}
	ret[0] = addDigit;
	return ret;

}
