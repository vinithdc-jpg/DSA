#include <stdio.h>
#include <math.h>

int main() {

    int n,temp,remainder,sum=0,digits=0;

    printf("Enter number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0){
        digits++;
        temp/=10;
    }

    temp=n;

    while(temp!=0){

        remainder=temp%10;

        sum += pow(remainder,digits);

        temp/=10;

    }

    if(sum==n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}