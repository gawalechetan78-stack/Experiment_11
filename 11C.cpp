

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void set_length_width(int x, int y)
    {
        length = x;
        width = y;
    }

    int rect_area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect1;
    Rectangle rect2;

    int length = 0, width = 0;

    cout << "Enter the length and width for Rectangle 1 in mtr (separated by space): ";
    cin >> length >> width;
    if (length <= 0 || width <= 0)
    {
        cout << "Invalid dimensions!" << endl;
        return 1;
    }
    else if (length == width)
    {
        cout << "The given input corresponds to a square" << endl;
        cout << "The area of the square 1: " << length * length << " sq. mtr" << endl;
    }
    else
    {
        rect1.set_length_width(length, width);
        cout << "The area of the rectangle 1: " << rect1.rect_area() << " sq. mtr" << endl;
    }

    cout << endl;

    cout << "Enter the length and width for Rectangle 2 in mtr (separated by space): ";
    cin >> length >> width;
    if (length == width)
    {
        cout << "The given input corresponds to a square" << endl;
        cout << "The area of the square 2 is " << length * length << " sq. mtr" << endl;
    }
    else
    {
        rect2.set_length_width(length, width);
        cout << "The area of the rectangle 2 is " << rect2.rect_area() << " sq. mtr" << endl;
    }
    
    return 0;
}
