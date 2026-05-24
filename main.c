#include <stdio.h>
int main(){
    
    int i, *P, array[50], N, even_num = 0, odd_num = 0;
    do{
        printf("Enter the size of the array: ");
        scanf("%d", &N);}
    while(N>50 || N<=0);

    P = array;
    for (i = 0; i < N; i++){
        printf("Enter value (%d): ", i+1);
        scanf("%d", P+i);}
        for (i = 0; i < N; i++){

            if (*(P+i) % 2 == 0){
                even_num++;
            }
            else{
                odd_num++;
            }
        }
    
        printf("There are %d Even number(s)!\n", even_num);
        printf("There are %d Odd number(s)!" , odd_num);
    }