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


    ifstream fin(argv[1]);
    ofstream fout(argv[2], ios::out | ios::app);

    string line;

    while (!fin.eof())
    {
        if (getline(fin, line))
        {
            fout << line << std::endl;
            cout << line << std::endl;
        }
    }
    cout.flush();
    fout.flush();
}