#include<stdio.h>
void printString(char arr[]);
int main(){
    char str[100];
    scanf("%s", str);
    strrev(str);

    printString(str);
    return 0;
}
void printString(char arr[]){

    for(int i=0; arr[i]!='\0'; i++){

     printf("%c ",arr[i]);

    }
    printf("\n");

}
