#include <iostream>
#include <iterator>
#include <boost/lexical_cast.hpp>

#include "fibbs.h"


const static int WRONG_ARGS = 1;

int main(int argc, char * argv[])
{
    if (argc < 2)
    {
        std::cerr << "Usage: " << argv[0] << " number" << std::cerr;
        exit(WRONG_ARGS);
    }

    std::string numberString(argv[1]);

    std::uint64_t number = boost::lexical_cast<std::uint64_t> (numberString);

    auto&& fNumbers = fibbs(number);
    std::copy(
            fNumbers.begin(),
            fNumbers.end(),
            std::ostream_iterator<uint64_t>(std::cout, " ")
    );
    std::cout.flush();

}