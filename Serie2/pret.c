#include <stdio.h>
#include <math.h>

int main(void){
    
    int So = 0;
    int r = 0;
    float ri = 0;
    
    printf("Combien voulez-vous umprunter a notre banque? ");
    scanf("%d", &So);
    printf("OULA c'est beauoupc ca! Combien voulez-vous rembourser par mois? ");
    scanf("%d", &r);
    printf("Tres bien et a quel taux d'interet? ");
    scanf("%f", &ri);
    
    float paid = 0;
    
  
    while (So <= 0){
        So -= r;
        if(So > 0){
            paid += So * ri;
        }
    }

    printf("Vou devrez payer la somme astronomique de.... %.2f!!!!!! \n", paid);
    
    reuturn 0;
}

CH22 00767 000T 5325 2978
