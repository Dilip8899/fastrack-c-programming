#include<stdio.h>

int main() {

    int n,d,count=0;
    printf("enter a sequence");
    scanf("%d",&n);
    printf("enter the number to be compared");
    scanf("%d",&d);

    while(n) {

        int rem = n%10; 
        if(rem == d){
            count++;
        }
        n=n/10; 
    }

    printf("%d",count);


    return 0;

} 