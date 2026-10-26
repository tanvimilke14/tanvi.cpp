#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fout;
    string line;

    fout.open("sample.txt", ios::out);

    while (1)
    {
        getline(cin, line);

        if (line == "1")
            break;

        fout << line << endl;
    }

    fout.close();

    ifstream fin;
    fin.open("sample.txt");

    while (getline(fin, line))
    {
        cout << line << endl;
    }

    fin.close();

    return 0;
}
