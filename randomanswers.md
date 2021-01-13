Q. 75: Phd Fees
#include <stdio.h>
#include<string.h>
struct student
{
  int roll;
  char name[100];
  char course[100];
  int fees;
}s1;  
int main()
{
printf("Details of student");
  scanf("%d",&s1.roll);
  scanf("%s",s1.name);
  scanf("%s",s1.course);
  scanf("%d",&s1.fees);
  printf("\nRoll Number=%d",s1.roll);
  printf("\nName=%s",s1.name);
  printf("\nCourse=%s",s1.course);
  printf("\nFees=%d",s1.fees);
  return 0;
}
