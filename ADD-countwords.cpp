#include<stdio.h>

int countWords(char arr[]);
void printString(char arr[]);
int main(){
    char str[1000];
 scanf("%[^\n]",str);
    printf("Total number of words in the string is :%d\n", countWords(str));
    printString(str);
    return 0;
}
int countWords(char arr[]){
    int i = 0, word = 1;
  for(i=0;arr[i]!='\0';i++){
    if(arr[i] == ' ' ||  arr[i] == '\t'){
        word++;
    }

   }
   return word;
}
void printString(char arr[]){
    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}
