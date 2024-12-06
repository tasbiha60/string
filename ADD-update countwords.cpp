#include<stdio.h>

int countWords(char arr[]);
int main(){
    char str[100];
    fgets(str,100,stdin);


    printf("%d",countWords(str));
    return 0;
}
int countWords(char arr[]){
    int count=1;

    for(int i=0; arr[i]!='\0'; i++){
            if(arr[i] == ' '){

count++;
            }

    }
    return count;

}
