#include <stdio.h>
int main(){
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num <= 0){

    if(num==0){
        printf("Every integer is a factor of 0\nSo, 0 has an infinite number of factors!!");
    }
    else{
        num = -num;
    }
    }
    printf("Factors of %d are: ",num);
        for (int i = 1 ; i <= num ; i++){
        if ( num % i == 0){
            printf("%d ",i);
        }
    }
    printf("\nNOTE:- Above factors has both positive and negative values.");
    return 0;
}