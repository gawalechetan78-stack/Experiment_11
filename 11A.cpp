

#include <iostream>

using namespace std;

class Student {
    public:

    string name;
    string branch;
    string subject;
    string year;
    float result;
};

int main() {
    Student s1;

    s1.name = "Abhisar Behera";
    s1.branch = "Electronics and Telecommunication";
    s1.subject = "CPP";
    s1.year = "2025";
    s1.result = 8.59;

    cout << s1.name << endl;
    cout << s1.branch << endl;
    cout << s1.subject << endl;
    cout << s1.year << endl;
    cout << s1.result << endl;
    return 0;
}
