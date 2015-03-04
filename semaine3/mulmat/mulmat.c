#include <stdio.h>


#define N 2

typedef struct {
	unsigned int n;
	unsigned int m;
	double t[N][N];
} Matrix;


int main(void){

	
	Matrix M1;
	M1.n = 2;
	M1.m = 2;
	M1.t[2][1] = 1;
	
	
	return 0;
}

