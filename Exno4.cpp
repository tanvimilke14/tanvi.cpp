 #include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle(float len, float wid)
    {
        length = len;
        width = wid;
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Rectangle destroyed" << endl;
    }

    // Function to display length
    float dispLength()
    {
        return length;
    }

    // Function to display width
    float dispWidth()
    {
        return width;
    }

    // Function to calculate area
    float Area()
    {
        return length * width;
    }

    // Function to calculate perimeter
    float Perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Rectangle value(3, 4);

    cout << "Length of rectangle: " << value.dispLength() << endl;
    cout << "Width of rectangle: " << value.dispWidth() << endl;
    cout << "Area of rectangle is: " << value.Area() << endl;
    cout << "Perimeter of rectangle is: " << value.Perimeter() << endl;

    return 0;
}
