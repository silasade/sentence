/*Program to reverse a sentence*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    char eentences[50];
    printf("Enter the sentence you want to reverse: \n");
    if(fgets(eentences,50,stdin)!=NULL){
        eentences[strcspn(eentences,"\n")]='\0';
    }
    int len=strlen(eentences);
    for(int i=len; i>=0; i--){
        printf("%c",eentences[i]);
    }
    return 0;
}