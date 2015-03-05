#include <stdio.h>
#include <math.h>

double const g = 9.81;

int main(void){
    
    double Ho = 0;
    float eps = 0;
    double h_fin = 0;
    
    printf("Entrer la hauteur initail: ");
    scanf("%lf", &Ho);
    
    printf("Entrer le coeficient de rebond [0, 1[ : ");
    scanf("%f", &eps);
    
    printf("Entrer la hauteur de fin: ");
    scanf("%lf", &h_fin);
    
    while( ! (0 <= eps && eps < 1)){
        printf("Vous etes un debile ou quoi?? On a dit entre o et 1 includ");
        scanf("%f", &eps);
    }
    
    
    double v = sqrt(2 * g * Ho);
    double h = Ho;
    
    int n = 0;
    do{
        v = eps * v;
        h = (v*v)/(2 * g);
        ++n;
    }while(h > h_fin);
    
    printf("Le nomvbre de rebond est %d. \n", n);
        
        
    
    
    return 0;
}