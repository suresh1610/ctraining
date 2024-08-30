#include<stdio.h>
int main(){
	int size;
	scanf("%d", &size);
	int arr[size];


	for(int i = 0; i < size; i++){
		scanf("%d", &arr[i]);
	}

	for(int i = 0; i < size; i++){
		int max_ele = arr[i];
		for(int j = i+1; j < size; j++){
			if(max_ele < arr[j]){
				max_ele = arr[j];
				i = j;
			}
		}
		printf("%d ", arr[i]);
	}
	return 0;
}

// sample input
// 5
// 2 12 3 4 5

// sample output;
// 12 5
