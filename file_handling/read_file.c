#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE* fptr;
	fptr = fopen("file_first.txt", "w");

	if(fptr == NULL){
		printf("The file is not opened");
		exit(0);
	}

	fprintf(fptr,"hello");
	fclose(fptr);

	return 0;
}
