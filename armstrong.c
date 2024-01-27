#include <stdio.h>

int main()
{
 int n,num;
 printf("Enter a number:\n");
 scanf("%d",&num);
 n=num;
 
 int reminder,result=0;
 
 while(n!=0){
     reminder=n%10;
     result=result+(reminder*reminder*reminder);
    n=n/10;
 }
if(result==num)
{
    printf("it is an armstrong number");
}else{
    printf("it is not a armstrong number");
}
    return 0;
}
