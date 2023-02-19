#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   int tempo, velocidade;
   float comb, distancia;
   
   cin >> tempo >> velocidade;
   
   distancia = (float) velocidade * tempo;
   
   comb = (float) distancia / 12;
   
   cout << fixed << setprecision(3) << comb << endl;
   
    return 0;
}