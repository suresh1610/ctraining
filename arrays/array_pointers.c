#include<stdio.h>
int main(){
	int arr[]= {10,20,30,40,50};
	int arr_size = sizeof(arr)/sizeof(int);
	int *ptr;
	ptr = arr;
	for(int i = 0; i < arr_size; i++){
		printf("%d", *ptr);
		ptr++;
	}
	return 0;
}
