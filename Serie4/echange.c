#include <stdio.h>


void echange(int* const i, int* const j){
    int t = *i;
    *i = *j;
    *j = t;
}


int main(void) {
    int i = 10;
    int j = 55;
    
    printf("Avant : i=%d et j=%d\n", i, j);
    echange(&i, &j);
    printf("Après : i=%d et j=%d\n", i, j);
    
    return 0;
}