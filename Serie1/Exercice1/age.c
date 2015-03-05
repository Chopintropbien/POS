//
//  age.c
//  Created by Lauriane Mollier on 18/02/2015.
//

#include <stdio.h>
#include <math.h>


int main(void){
    
    int age = 0;
    
    printf("Quel age avez-vous ?");
    scanf("%d", &age);
    
    int annee = 2015 - age;
    printf("Vous etes né le  %d \n", annee);
    
    return 0;
}
