#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
   float salario, reajuste, nsalario;
   int per;
   
   cin >> salario;
   
   if(salario>=0 && salario<=400){
        per=15;
        nsalario=salario+(salario*0.15);
        reajuste=nsalario-salario;
    } else if(salario>400 && salario<=800){
        per=12;
        nsalario=salario+(salario*0.12);
        reajuste=nsalario-salario;
    } else if(salario>800 && salario<=1200){
        per=10;
        nsalario=salario+(salario*0.10);
        reajuste=nsalario-salario;
    } else if(salario>1200 && salario<=2000){
        per=7;
        nsalario=salario+(salario*0.07);
        reajuste=nsalario-salario;
    } else if(salario>2000){
        per=4;
        nsalario=salario+(salario*0.04);
        reajuste=nsalario-salario;
    }
    
    cout << "Novo salario: " << fixed << setprecision(2) << nsalario << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
    cout << "Em percentual: " << fixed << setprecision(2) << per << " %"<< endl;
  
 
    return 0;
}