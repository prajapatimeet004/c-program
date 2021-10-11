#include<stdio.h>
void main(){
    char s[20];
    int i;
// input
    printf("enter your name= ");
    scanf("%s",s);
// logic and ouput
    for(i=0; s[i]=='\n';i++){
         // printf("%c, \n",s[i]);
    }
    printf("good morning,%s",s);

}