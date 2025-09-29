

#include <iostream>

using namespace std;

class car {
    public:

    string carName;
    string carModel;
    string carYear;
};

int main() {
    car car1;
    car car2;

    cout << "Enter the name for Car 1: ";
    cin >> car1.carName;

    cout << "Enter the model for Car 1: ";
    cin >> car1.carModel;

    cout << "Enter the year of release for Car 1: ";
    cin >> car1.carYear;

    cout << endl;

    cout << "Enter the name for Car 2: ";
    cin >> car2.carName;

    cout << "Enter the model for Car 2: ";
    cin >> car2.carModel;

    cout << "Enter the year of release for Car 2: ";
    cin >> car2.carYear;

    cout << endl;

    cout << "Car 1" << endl;
    cout << "Name: " << car1.carName << endl;
    cout << "Model: " << car1.carModel << endl;
    cout << "Year: " << car1.carModel << endl;

    cout << endl;

    cout << "Car 2" << endl;
    cout << "Name: " << car2.carName << endl;
    cout << "Model: " << car2.carModel << endl;
    cout << "Year: " << car2.carModel << endl;
    return 0;
}
