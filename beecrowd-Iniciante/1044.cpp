#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b, maior, menor;
    cin >> a >> b;
    if(a>b){
        maior=a;
        menor=b;
    } else{
        maior=b;
        menor=a;
    }
    if(maior%menor==0){
        cout << "Sao Multiplos" << endl;
    } else{
        cout << "Nao sao Multiplos" << endl;
    }
 
    return 0;
}