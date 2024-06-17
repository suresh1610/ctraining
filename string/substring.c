#include<stdio.h>
#include<string.h>

int strStr(char *haystack, char *needles){
    int needle_len = strlen(needles);
    int haystack_len = strlen(haystack);
    int needle_idx = 0;
    int end = 0;

    if(needle_len > haystack_len){
        return -1;
    } else {
        printf("%d", (haystack_len - needle_len+1));
        for(int start = 0; start < (haystack_len - needle_len+1); start++){
            end = start;
            needle_idx = 0;
            while(haystack[start] == needles[0]){
                end++;
                needle_idx++;
                if(needle_idx == needle_len){
                    return start;
                } else if(needles[needle_idx] != haystack[end]){
                    break;
                }
            }
        }
        return -1;
    }

}

int main(){
    char haystack[100];
    char needles[100];
    scanf("%s", haystack);
    scanf("%s", needles);
    printf("%d", strStr(haystack, needles));
}
