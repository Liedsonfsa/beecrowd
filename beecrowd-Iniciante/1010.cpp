#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float code1, quant1, valor1, code2, quant2, valor2, valorTotal;

    cin >> code1 >> quant1 >> valor1;
    cin >> code2 >> quant2 >> valor2;

    valorTotal = quant1*valor1 + quant2*valor2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorTotal << endl;

    return 0;
}