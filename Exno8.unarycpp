 #include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    Distance(int f, int i) {
        feet = f;
        inch = i;
    }

    void operator--() {
        this->feet--;
        this->inch--;
    }

    void display() {
        cout << feet << " Feet " << inch
             << " Inches" << endl;
    }
};

int main() {
    Distance d1(8, 9);

    --d1;

    cout << "Distance after decrement: ";
    d1.display();

    return 0;
}
