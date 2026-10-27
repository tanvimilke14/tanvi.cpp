#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Sum of integers: " << add(5, 10) << endl;
    cout << "Sum of floats: " << add(2.5, 3.7) << endl;
    cout << "Sum of characters: " << add('A', 1) << endl;

    return 0;
}
