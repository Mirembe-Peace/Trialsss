#include<stdio.h>
int main(){
    //prompt the user to enter the number of columns
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    int columns = (2*rows)-1;
    
    //outer for loop to print the rows
    for(int i=1; i<=rows; i++){
    //inner for loop to print the columns
    for(int j=1; j<=columns; j++){
        if((j>=rows-(i-1)) && (j<=rows+(i-1))){
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

