#include "fibbs.h"

std::vector<std::uint64_t> fibbs(std::uint64_t n)
{
    std::vector<std::uint64_t> result(n, 0);

    if(n == 0)
    {
        return result;
    }

    if(n >= 1)
    {
        result[0] = 1;
    }

    if (n >= 2)
    {
        result[1] = 1;
    }

    if (n >= 3)
    {
        for (uint64_t idx = 2; idx < n; ++idx)
        {
            result[idx] = result[idx-1] + result[idx-2];
        }
    }

    return result;
}