#include <calculator_operations.h>

/* Status of the operation requested */
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter first value : ");
    scanf("%d\n",&a);
    printf("Enter Second value : ");
    scanf("%d",&b);
    char ch;
    printf("Enter your choice : ");
    scanf("%c",&ch);
    float res=0;
    switch(ch)
    {
        case '+':
        add();
        break;
        case '-':
        sub();
        break;
        case '*':
        mult();
        break;
        case '/':
        div();
        break;
        case '^':
        power();
        break;
        case '%':
        mod();
        break;
        case 's':
            sqr();
            break;
        case '!':
            fact();
            break;
        default:
        printf("Invalid Operations");
    }
}
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
void sqr()
{
    int x;
    scanf("%d",&x);
    int c=x*x;
    printf("%d",c);
}
void fact()
{
    int x,f=1;
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        f=f*i;
    }
    printf("%d",f);
}
