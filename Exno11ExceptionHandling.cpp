#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try
    {
        if (b == 0)
            throw "Division by zero error!";

        cout << "Result: " << a / b << endl;
    }
    catch (const char* msg)
    {
        cout << "Exception: " << msg << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
