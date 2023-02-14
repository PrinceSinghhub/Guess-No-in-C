#include<stdio.h>
// if we want to use random module in c the use hadder file
#include<stdlib.h>
// if we want to use time then use time hadder file
#include<time.h>
int main(){
    int n;
    srand(time(0));//means every time change our no
    // if we want to our rando, value under in 100 then use %100 +1

    n=rand()%100+1;
    printf("the random no is %d",n);
    return 0;
}

