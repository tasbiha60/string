#include<stdio.h>
void printString(char arr[]);
int main(){
    char name[100];
    scanf("%s",name);
    printf("The String you entered is: %s",name);
    return 0;
}
void printStrinf(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
    printf("%c",arr[i]);
}
printf("\n");
}
