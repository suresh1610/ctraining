#include<stdio.h>
#include<string.h>
int strStr(char* s){
	int lenght = 0;
	int i = strlen(s) - 1;

	while( i >= 0 && s[i] == ' '){
		i--;
	}

	while(i >= 0 && s[i] != ' '){
		lenght++;
		i--;
	}
	return lenght;
}
int main(){
	char word[50];
	scanf(" %[^\n]s", word);

	int result = strStr(word);

	printf("last word count is ===> %d\n", result);
	return 0;
}

