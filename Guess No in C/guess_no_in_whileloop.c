#include<stdio.h>
// if we want to use random module in c the use hadder file
#include<stdlib.h>
// if we want to use time then use time hadder file
#include<time.h>
int main(){
    int n,num,z=1;
    int a=10,b=0;
    srand(time(0));//means every time change our no
    // if we want to our rando, value under in 10 then use %10

    n=rand()%10;
    printf("the random no is %d \n",n);
    while(a>b){
        
        printf("guess the no between 1 to 10 \n");
        scanf("%d",&num);
        if(num>n){
            printf("lower no please \n");
        }
        else if(num<n){
            printf("Higher  no please \n");
        }
        else if(n==num){
            printf("You guessed your right ans in %d attempted \n",z);
            break;
        }
        z++;
        b++;
        
    }
    return 0;
}