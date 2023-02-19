#include <iostream>
 
using namespace std;

void insertion_sort(int *v){
    int i, j, aux;
    
    for(i = 0; i < 3; i++){
        aux = v[i];
        j = i - 1;
        
        while(j >= 0 && (aux < v[j])){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}
 
int main() {
 
    int i, vetor[3],  vetorB[3];
    
    for(i = 0; i < 3; i++){
        cin >> vetor[i];
        vetorB[i] = vetor[i];
    }
    
    insertion_sort(vetor);
    
    for(i = 0; i < 3; i++){
        cout << vetor[i] << endl;
    }
    
    cout << "\n";
    
    for(i = 0; i < 3; i++){
        cout << vetorB[i] << endl;
    }
    
 
    return 0;
}