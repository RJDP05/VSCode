#include<stdio.h>
 void toh(int n, int a, int b, int c){
        if (n>0){
            toh(n-1,a,c,b);
            printf("Move disk %d from rod %d to rod %d\n",n,a,b);
            toh(n-1,b,a,c);
        }
 }

 int main(){
    int n;
    printf("Enter the Number of Disk: \n");
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid Input !!");
    }
    else toh(n,1,2,3);
    return 0;
 }