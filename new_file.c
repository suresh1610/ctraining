#include<stdio.h>
#include<stdlib.h>

int **arry_2d;

int main(){
	int n = 2;
	int m = 4;

	arry_2d = malloc(n * sizeof(int *));

	for(int i = 0; i < n; i++){
		arry_2d[i] = malloc(m * sizeof(int));
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			arry_2d[i][j] = (i+j) * 2;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d\n", arry_2d[i][j]); 
		}
	}

	for(int i = 0; i < m; i++){
		free(arry_2d);
	}

	return 0;
}
