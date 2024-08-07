#include<stdio.h>
int main(){
    for(int row=1; row<=10; row++){
        for(int star=10; star>0; star--){
         if(star <= row ){
            printf("*");
         }
         else{
            printf(" ");
         }
        }
        printf("\n");
    }
    return 0;
} 