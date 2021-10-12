// C proram to find frequncy of inputted digit
// input = string
// output = frequnciy
// logic = first inlisiz every digit frequnciy to 0
//
#include<stdio.h>
void main(){
    int i,f[10];
    char c;
// input and logic
    for(i=0;i<10;i++){
        f[i]=0;
    }
    for(i=0;(c=getchar()) != '\n';i++){
        if(c >='0' &&  c <='9'){
          f[c-'0']++;
        }
    }
    for(i=0;i<10;i++){
        printf("%d-%d, ",i,f[i]);
    }
        printf("\n");
}