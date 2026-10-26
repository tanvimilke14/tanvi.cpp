#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    bool operator>(Distance d) {
        if (feet > d.feet)
            return true;
        else if (feet == d.feet && inch > d.inch)
            return true;
        else
            return false;
    }
};

int main() {
    Distance d1(8, 9);
    Distance d2(7, 8);

    if (d1 > d2)
        cout << "First distance is greater";
    else
        cout << "Second distance is greater";

    return 0;
}
