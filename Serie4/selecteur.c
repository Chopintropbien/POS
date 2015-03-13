#include <stdio.h>


double* demander_nombre(double* val1, double* val2, double* val3){
    
    int i;
    printf("Quel valeur vouler vous? ");
    scanf("%d", &i);
    
    switch (i) {
        case 1: return val1;
        case 2: return val2;
        case 3: return val3;
        default: return NULL;
    }
}

int main(void){
    
    double val1 = 1;
    double val2 = 2;
    double val3 = 3;
    
    double* choix = demander_nombre(&val1, &val2, &val3);
    
    printf("Vous avez choisis %.2f. \n", *choix);
    
    
    return 0;
}