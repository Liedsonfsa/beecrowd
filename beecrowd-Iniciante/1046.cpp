#include <iostream>
 
using namespace std;
 
int main() {
 
    int inicio, fim, resul;
    
    cin >> inicio >> fim;
    
    if(inicio < fim){
        resul = fim - inicio;
    } else if(inicio == fim){
        resul = 24; 
    } else{
        resul = (24 - inicio) + fim;
    }
    
    cout << "O JOGO DUROU " << resul << " HORA(S)" << endl;
 
    return 0;
}