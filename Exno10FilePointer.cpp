#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("example.txt");
    fout << "Hello World!";
    cout << "Write position: " << fout.tellp() << endl;
    fout.close();

    ifstream fin("example.txt");
    fin.seekg(6);
    string word;
    fin >> word;
    cout << "Word after 6th byte: " << word << endl;
    fin.close();
}
