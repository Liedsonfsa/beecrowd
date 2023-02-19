#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int number, hours;
    float salary;

    cin >> number >> hours;

    cin >> salary;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary*hours << endl;

    return 0;
}