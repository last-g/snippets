#include <iostream>
#include <fstream>

using namespace std;

const static int WRONG_ARGS = 1;

int main(int argc, char * argv[])
{
    if (argc < 3)
    {
        cerr << "Not enough args" << endl;
        cerr << "  Usage: " << argv[0] << " file_to_read_from file_to_write_to" << endl;
        exit(WRONG_ARGS);
    }

    // open file for read
    ifstream fin(argv[1]);

    // open file for write&append
    ofstream fout(argv[2], ios::out | ios::app);

    // create buffer line
    string line;

    while (!fin.eof()) // checks if file is on it's end, this would be false only after failed read
    {
        if (getline(fin, line)) // returns count of bytes was read, returns 0 on when end of file reached
        {
            fout << line << std::endl;
            cout << line << std::endl;
        }
    }
    cout.flush();
    fout.flush();
}