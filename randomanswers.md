Q. 75: Phd Fees
```#include <stdio.h>
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
}`

Q. 71: Student Data Repository

`#include<stdio.h>
struct student
{
 char name[100];
struct dateOfBirth
{
  int rollno,date,month,year;
}DOB;
}std;
int main()
{
  scanf("%s%d%d%d%d",std.name,&std.DOB.rollno,&std.DOB.date,&std.DOB.month,&std.DOB.year);
  printf("Name=%s\nRollNo=%d\nDate of birth=%d/%d/%d",std.name,std.DOB.rollno,std.DOB.date,std.DOB.month,std.DOB.year);
  return 0;
}`

Q. 66: super digit
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int superd(long long int sumd)
{
    int t=0;
    if(sumd/10==0)
        {return sumd;}
    else
        {
         
         while(sumd!=0)
             {
             int d;
             d=sumd%10;
             t=t+d;
             sumd=sumd/10.0;
         }
        }
   sumd=t; 
   return superd(sumd);
}    
int main() {
    int p; long long int sumd=0;
    char ch;
    ch=getchar();
    while(ch!=' ')
    {
      int q=ch-'0';
      sumd=sumd+q;
      ch=getchar();  
    }    
    scanf("%d",&p);
    sumd=p*sumd;
    //printf("%d",sum);
    printf("%d",superd(sumd));
    return 0;
}
