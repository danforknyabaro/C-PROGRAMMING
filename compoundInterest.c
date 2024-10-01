

#include <stdio.h>
#include <math.h>
int main(){
double amount, principal, rate, numberofcompoundings, time, compoundInterest;
printf("enter principal:");
scanf("%Lf", &principal);
printf("enter rate(in percentage):");
scanf("%Lf", &rate);
rate=rate/100
printf("enter the numberofcompoundings:");
scanf("Lf", &numberofcompoundings);
printf("enter time (in yrs):"):
scanf("%Lf", &time);
amount=principal* pow((1+rate/numberofcompoundings),(numberofcompoundings*time));
compoundInterest=amount-principal;
printf("the compoundinterest is:%Lf\n", compoundInterest);
return 0;
}
