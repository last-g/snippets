#include "fibbs.h"

// Function body
std::vector<std::uint64_t> fibbs(std::uint64_t n)
{
    // Dynamic array that supports runtime allocation filled with ones
    std::vector<std::uint64_t> result(n, 1);

    for (uint64_t idx = 2; idx < n; ++idx)
    {
        result[idx] = result[idx-1] + result[idx-2];
    }

    return result;
}