#include<stdio.h>
struct _fraction
{  int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f1;
  printf("enter the 1st fraction\n");
  scanf("%d%d",&f1.num,&f1.den);
  return f1;
  Fraction f2;
  printf("enter the 1st fraction\n");
  scanf("%d%d",&f2.num,&f2.den);
  return f2;
  Fraction f3;
  printf("enter the 1st fraction\n");
  scanf("%d%d",&f3.num,&f3.den);
  return f3;
}
int compare_two_fractions (Fraction f1, Fraction f2)
{
    int common_den = f1.den * f2.den;
    int a = f2.den * f1.num;
    int b = f2.num * f1.den;
    if (a < b)
     return 1;
    else 
     return 0;
  
}
Fraction smallest_fraction(Fraction f1,Fraction f2,Fraction f3)
{
  {
  if(compare_two_fractions(f1,f2) && compare_two_fractions(f1,f3))
    return f1;
  else if(compare_two_fractions (f1,f2))
    return f2;
  else 
    return f3;
  }
}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction smallest)
{
  printf("So the smallest fraction between %d/%d,%d/%d,%d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
 
  
}
int main()
{
Fraction f1,f2,f3,smallest;
f1=input_fraction();
f2=input_fraction();
f3=input_fraction();
smallest=smallest_fraction(f1,f2,f3);
output(f1,f2,f3,smallest);
return 0;
}


