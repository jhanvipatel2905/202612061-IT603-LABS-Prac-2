#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student s("Jhanvi Patel", 16);

    s.display();

    if (s.isPassed()) {
        cout << "Result: Passed" << endl;
    } else {
        cout << "Result: Failed" << endl;
    }
    cout << "for gitimore" << endl;
    return 0;
}
