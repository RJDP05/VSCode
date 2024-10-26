#include<stdio.h>
int main(){
    char op;
    double a,b,t;

    printf("Enter OP");
    scanf("%c",&op);

    printf("Enter two ");
    scanf(" %lf %lf",&a,&b);
    
        if (op=='+'){
            t = a+b;
        printf("The Sum is: %lf",t);
        }
        else if (op=='-') {
            t = a-b;
         printf("The Minuse is: %lf",t);
        }
        else if (op=='/') {
             t = a/b;
         printf("The Devide is: %lf",t);
        }
        else if (op=='*') {
             t = a*b;
         printf("The Multti is: %lf",t);
        }
     
    else{
        printf("Cha Muda");
    }
    
    return 0;
}