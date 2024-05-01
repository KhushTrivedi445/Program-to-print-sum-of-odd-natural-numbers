#include <stdio.h>

int main () {
int n;
printf("Enter number to which you want the sum : ");
scanf("%d",&n);
int i=1,sum=0;
while(i<=n) {
    sum= sum +i;
    i=i+2;
}
printf("The sum is %d",sum);


    return 0;
}