#include<stdio.h>
#include<stdlib.h>

int **mem;
int main(){
	int m = 2;
	int n = 2;
	
	mem = malloc(m * sizeof(int *));

	for(int i = 0; i < n; i++){
		mem[i] = malloc(n * sizeof(m * sizeof(int)));
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			mem[i][j] = (i * j) * 2; 
		}
	}

	return 0;
}
