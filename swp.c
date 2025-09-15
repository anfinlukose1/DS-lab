#include<stdio.h>
#include<stdlib.h>
void main()
{
 int a,b,temp;
 printf("enter the two numbers  : ");
 scanf("%d %d",&a,&b);
 temp=a;
 a=b;
 b=temp;
 printf("swaped valus are %d,%d",a,b);
 }
