#include <stdio.h>
#include <math.h> // ou inclure -lm dans la ligne de compilation



typedef unsigned char octet;




void afficher_binaire(octet o){
    for(int i = 7; i >= 0; --i){
        int bit = o & (1 << i);
        if(bit)putchar('1');
        else putchar('0');
    }
}

int main(void){
    
    afficher_binaire(4);
    printf("\n");
    
    
    
    return 0;
}