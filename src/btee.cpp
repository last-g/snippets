#include <algorithm>
#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;

const static int WRONG_ARGS = 1;

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        cerr << "Not enough args" << endl;
        cerr << "  Usage: " << argv[0] << " file_to_read_from file_to_write_to" << endl;
        exit(WRONG_ARGS);
    }


    ifstream fin(argv[1], ios::binary);
    ofstream fout(argv[2], ios::out | ios::app | ios::binary);

    // cache creating if empty iterator
    const auto&& end  = istreambuf_iterator<char>();

    // Going throw iterator
    for(auto&&it = istreambuf_iterator<char>(fin); it != end; ++it)
    {
        cout << *it;
        fout << *it;
    }

    // Ensure all data were flushed
    cout.flush();
    fout.flush();

    return 0;
}