// including stdin/stdout/stderr part of stdlib
#include <iostream>

// Setting default namespace
using namespace std;

int main() {
    // print line and eol symbol after it, implicit namespace usage
    cout << "Hello, World!" << endl;

    // explicit namespace
    std::cout << "And with namespaces" << std::endl;

    return 0;
}