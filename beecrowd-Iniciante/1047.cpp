#include <iostream>

using namespace std;

int main() {

    int a, b, c, d, dif;

    cin >> a >> c >> b >> d;

    dif = ((b*60)+d) - ((a*60)+c);

    if(dif <= 0) dif += 24*60;

    cout <<"O JOGO DUROU " << dif / 60 << " HORA(S) E " << dif % 60 << " MINUTO(S)" << endl;
    
    return 0;
}