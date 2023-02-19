#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    int X, Y;
    float Total;
    
    cin >> X >> Y;
    
    switch(X){
        case 1:
            Total = (float)(Y * 4);
            break;
        case 2:
            Total = (float)(Y * 4.50);
            break;
        case 3:
            Total = (float)(Y * 5);
            break;
        case 4:
            Total = (float)(Y * 2);
            break;
        case 5:
            Total = (float)(Y * 1.50); 
            break;
    }
    
    cout << "Total: R$ " << fixed << setprecision(2) << Total << endl;
 
    return 0;
}