#include<stdio.h>
#include<conio.h>
void main()
{
int C,T,A,U;
clrscr();
 printf("Enter the Electricity Units\t");
 scanf("%d",&U);

 if(U<=50)
 {
 A = U * 0.50;
 }
 else if(U>=51 && U<=150)
 {
 A = U * 0.75;
 }
 else if(U>=151 && U<=250)
 {
 A = U * 1.20;
 }
 else if(U>=251)
 {
 A = U * 1.50;
 }

 C = A * 0.20;
 T = C + A;
 printf("Electricity Bill is\t%d",T);


getch();
}