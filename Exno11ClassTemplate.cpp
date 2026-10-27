#include <iostream>
using namespace std;

// Class Template
template <class T>
class Calculator
{
    T num1, num2;

public:
    Calculator(T a, T b)
    {
        num1 = a;
        num2 = b;
    }

    void displayResult()
    {
        cout << "Addition: " << num1 + num2 << endl;
        cout << "Subtraction: " << num1 - num2 << endl;
        cout << "Multiplication: " << num1 * num2 << endl;
        cout << "Division: " << num1 / num2 << endl;
    }
};

// Template with Multiple Parameters
template <class T1, class T2>
void showData(T1 a, T2 b)
{
    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    Calculator<int> calc1(10, 5);

    cout << "For Integers:" << endl;
    calc1.displayResult();

    Calculator<float> calc2(5.5, 2.2);

    cout << "\nFor Floats:" << endl;
    calc2.displayResult();

    cout << "\nTemplate with Multiple Parameters:" << endl;
    showData(10, 20.5);
    showData('A', "Hello");

    return 0;
}
