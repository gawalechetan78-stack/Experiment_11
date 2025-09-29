

#include <iostream>

using namespace std;

class Calculator
{
private:
    float num_1;
    float num_2;
    int sum;

public:
    void get_num(int a, int b)
    {
        num_1 = a;
        num_2 = b;
    }

    float addition()
    {
        return num_1 + num_2;
    }

    float subtraction()
    {
        return num_1 - num_2;
    }

    float multiplication()
    {
        return num_1 * num_2;
    }

    float division()
    {
        return num_1 / num_2;
    }
};

int main()
{
    Calculator calc;
    float a, b;

    cout << "Enter two numbers a and b (separated by space): ";
    cin >> a >> b;

    calc.get_num(a, b);

    cout << "Addition: " << (int)calc.addition() << endl;
    cout << "Subtraction: " << (int)calc.subtraction() << endl;
    cout << "Multiplication: " << calc.multiplication() << endl;

    if (b != 0)
    {
        cout << "Division: " << calc.division() << endl;
    }
    else
    {
        cout << "Division: Division by zero is undefined" << endl;
    }

    return 0;
}
