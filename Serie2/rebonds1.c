#include <stdio.h>
#include <math.h>

double const g = 9.81;

int main(void){
    
    int NBR = 0;
    double Ho = 0;
    float eps = 0;
    
    printf("Entrer le nombre de rebons: ");
    scanf("%d", &NBR);
    
    printf("Entrer la hauteur initail: ");
    scanf("%lf", &Ho);
    
    printf("Entrer le coeficient de rebond [0, 1[ : ");
    scanf("%f", &eps);
    
    while( ! (0 <= eps && eps < 1)){
        printf("Vous etes un debile ou quoi?? On a dit entre o et 1 includ");
        scanf("%f", &eps);
    }
    
    double v = sqrt(2 * g * Ho);
    double h = Ho;
    for(int i=0; i<NBR; ++i){
        v = eps * v;
        h = (v*v)/(2 * g);
    }
    
    printf("La hauteur est de %fl \n", h);
    
    return 0;
}