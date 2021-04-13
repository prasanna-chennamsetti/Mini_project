#include <calculator_operations.h>

void add(int a,int b)
{
    int c=a+b;
    printf("%d",c);
}
void sub(int a,int b){
    int c=0;
    if(a>b){
        c=a-b;
    }
    else{
        c=b-a;
    }
    printf("%d",c);
}
void mult(int a,int b){
    int c=a*b;
    printf("%d",c);
}
void div(int a,int b){
    int c=0;
    if(b==0){
        printf("Invalid");
    }
    else{
        c=a/b;
    }
    printf("%d",c);
}
void power(int a,int b){
    int c=pow(a,b);
    printf("%d",c);
}
void mod(int a,int b){
    int c=a%b;
    printf("%d",c);
}
