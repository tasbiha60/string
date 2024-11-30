#include<stdio.h>
void printString(char arr[]);
int main(){
    char str[1000];
    fgets(str,1000,stdin);
    puts(str);
    printString(str);
    return 0;
}
void printString(char arr[]){
    int length=0;
    while(arr[length]!=0){
            length++;
    }
    if(arr[length-1]=='\n'){
        length--;
    }
    for(int i=length-1;i>=0;i--){

            printf("%c ", arr[i]);

    }
    printf("\n");
}
