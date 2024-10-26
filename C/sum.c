#include<stdio.h>
int Sum(int n){
     if(n==0) return 0 ; 
    return n + Sum(n-1);
}
int main(){
    int a = 5;
    printf("Sum :%d",Sum(a));
    return 0;
}