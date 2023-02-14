#include<stdio.h>
// if we want to use random module in c the use hadder file
#include<stdlib.h>
// if we want to use time then use time hadder file
#include<time.h>
int main(){
    int n,num,nguess=1;
    srand(time(0));//means every time change our no
    // if we want to our rando, value under in 100 then use %100 +1

    n=rand()%100+1;
    printf("the random no is %d \n",n);
    do{
        printf("guess the no between 1 to 100 =\n");
        scanf("%d",&num);
        if(num>n){
            printf("lower no please = \n");
        }
        else if(num<n){
            printf("Higher  no please = \n");
        }
        else{
            printf("You guessed in %d attempted = \n",nguess);
        }
        nguess++;
    }while(num!=n);
    return 0;
}