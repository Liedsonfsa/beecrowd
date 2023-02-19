#include <stdio.h>

int main()
{
    
    float a, b, c, d, notaExame;
    double media, mediaFinal;
    scanf("%f %f %f %f",&a, &b, &c, &d);
    media=((a*2)+(b*3)+(c*4)+d)/10;
    printf("Media: %.1lf\n", media);
    if(media>=7.0) printf("Aluno aprovado.\n");
    else if(media<5.0) printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&notaExame);
        printf("Nota do exame: %.1f\n",notaExame);
        mediaFinal=(media+notaExame)/2;
        if(mediaFinal>=5.0) printf("Aluno aprovado.\n");
        else printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",mediaFinal);
      
        
    }
    
    return 0;

}