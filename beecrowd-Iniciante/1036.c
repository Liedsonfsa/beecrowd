#include<stdio.h>
#include <math.h>

double calculaRaiz(double a, double b, double c);

struct Raiz{
    double x, y;
} raiz;

int main()
{
 double a, b, c, t;
 scanf("%lf %lf %lf", &a, &b, &c);

 if(((b * b) - 4 * a * c) < 0 || a == 0){
     printf("Impossivel calcular\n");
 }
 else{
    t = calculaRaiz(a,b,c);
    raiz.x = ((-b + t) / (2 * a));
    raiz.y = ((-b - t) / (2 * a));
    printf("R1 = %.5lf\nR2 = %.5lf\n", raiz.x, raiz.y);
  }

 return 0;
}

double calculaRaiz(double a, double b, double c){
    double t;
    
    t = sqrt((b * b) - 4 * a * c);

    return t;
}