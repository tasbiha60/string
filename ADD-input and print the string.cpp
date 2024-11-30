#include<stdio.h>
void printString(char arr[]);
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    puts(str);
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}









