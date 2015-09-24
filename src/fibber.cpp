#include <iostream>
#include <iterator>
#include <boost/lexical_cast.hpp>

// Including only header, not source
#include "fibbs.h"

const static int WRONG_ARGS = 1;

int main(int argc, char * argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " number" << std::cerr;
        exit(WRONG_ARGS);
    }

    try
    {
        // Using lexical_cast from boost namespace to convert string to integer
        std::uint64_t number = boost::lexical_cast<std::uint64_t> (argv[1]);

        auto&& fNumbers = fibbs(number);

        // copies all data contest of fNumbers to stdout (separating with " ")
        std::copy(
                fNumbers.begin(),
                fNumbers.end(),
                std::ostream_iterator<uint64_t>(std::cout, " ")
        );

        std::cout.flush();
    }
    // Always catch exceptions by const ref
    catch (const boost::bad_lexical_cast& err)
    {
        std::cerr << "You should provide number as argument, not " << argv[1] << std::endl;
    }
}