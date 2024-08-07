#include<stdio.h>
int main(){
    //the median 
    int n = 6;
    for(int row=1; row<=11; row++){
        for(int star=1; star<=row; star++){
         if(n - (star-1) && n + (star-1)){
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