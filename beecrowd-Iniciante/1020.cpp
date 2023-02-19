#include <iostream>
 
using namespace std;
 
int main() {
 
    int num;
    
    cin >> num;
    
    cout << num / 365 << " ano(s)" << endl;
    num = num % 365;
    
    cout << num / 30 << " mes(es)" << endl;
    num = num % 30;
    
    cout << num << " dia(s)" << endl;
 
    return 0;
}