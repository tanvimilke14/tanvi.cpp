#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("log.txt", ios::app); // Append mode
    fout << "New entry added!" << endl;
    fout.close();
    return 0;
}
