

#include <iostream>
using namespace std;

class Cube
{
private:
    float side;

public:
    void set_side(float s)
    {
        side = s;
    }

    int get_side() {
        return side;
    }
};

float cube_volume(Cube c)
{
    return c.get_side() * c.get_side() * c.get_side();
}

int main()
{
    Cube cube;
    float side;

    cout << "Enter the side length of the cube: ";
    cin >> side;

    cube.set_side(side);
    cout << "Volume using method inside the class: " << cube_volume(cube) << endl;

    return 0;
}
