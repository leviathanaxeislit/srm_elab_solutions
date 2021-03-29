#include<stdio.h>
int HCF(int, int); //You have to write this function which calculates the HCF. 
	 
int main()
{
   int a, b, c, d, result;
   scanf("%d %d %d %d", &a, &b, &c, &d); /* Takes 4 number as input from the test data */
   result = HCF(HCF(a, b), HCF(c,d));
   printf("The HCF is %d", result);
return 0;
}

//Complete the rest of the program to calculate HCF
int HCF(int x, int y)
{
   while (x != y)
   {
      if (x > y)
       {
           return HCF(x - y, y);
       }
       else
       {
       return HCF(x, y - x);
       }
    }
    return x;
}
