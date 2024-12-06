#include<stdio.h>

int countLength1(char arr1[]);
int countLength2(char arr2[]);
int main(){
    char str1[1000];
    char str2[1000];
    scanf("%s %s",str1,str2);
  if(countLength1(str1) == countLength2(str2)){
        printf("they  are siblings\n");
    }
else{
    printf("They are  not siblings\n");
}

    return 0;
}
int countLength1(char arr1[]){
    int count1 = 0;
    for(int i=0;arr1[i]!='\0';i++){
        count1++;
    }
    return count1;
}
int countLength2(char arr2[]){
    int count2 = 0;
    for(int i=0;arr2[i]!='\0';i++){
        count2++;
    }
    return count2;
}
