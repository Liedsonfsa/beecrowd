#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float l, km;
    int k;

    cin >> k;
    cin >> l;

    km = (float)k / l;

    cout << fixed << setprecision(3) << km << " km/l" << endl;
    
    return 0;
}