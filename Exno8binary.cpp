#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    Distance operator+(Distance d) {
        Distance temp(0, 0);
        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;
        return temp;
    }

    void display() {
        cout << feet << " Feet "
             << inch << " Inches" << endl;
    }
};

int main() {
    Distance d1(3, 5);
    Distance d2(2, 4);

    Distance d3 = d1 + d2;

    cout << "Addition of Distance: ";
    d3.display();

    return 0;
}
