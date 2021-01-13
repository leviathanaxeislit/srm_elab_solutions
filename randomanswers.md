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

Q. 54: Deletion of sub string

#include <stdio.h>
#include<string.h>
int main() {
	//code
	int n,i,j,k,l,m,l1,l2,f;
	char str1[10000],str2[100000];
	scanf("%d",&n);
	while(n>0){
	    n--;
	    scanf("%s",str1);
	    scanf("%s",str2);
	    l1=strlen(str1);
	    l2=strlen(str2);
	    for(i=0;i<l1;i++){
	        f=0;
	        for(j=0;j<l2;j++){
	            if(str1[i]==str2[j]){
	                f=1;
	            }
	        }
	        if(f==0){
	            printf("%c",str1[i]);
	        }
	    }
	    printf("\n");
	    
	}
	return 0;
}

Q. 60: s-palindrome

#include<stdio.h>

#include<string.h>

int main()

{

    char str[1000];

    scanf("%s",str);

   int i,j;int f=9,len;

    len=strlen(str);

   

    for(i=0,j=len-1;i<len&&j>=0;i++,j--)

    {

        if((str[i]=='b')&&(str[j]=='d'))

        {

            f=0;continue;

        }

        else if((str[i]=='d')&&(str[j]=='b'))

        {

            f=0;continue;

        }

        else if((str[i]=='I')&&(str[j]=='I'))

        {

            f=0;continue;

        }

        else if((str[i]=='M')&&(str[j]=='M'))

        {

            f=0;continue;

        }

        else if((str[i]=='O')&&(str[j]=='O'))

        {

            f=0;continue;

        }

        else if((str[i]=='o')&&(str[j]=='o'))

        {

            f=0;continue;

        }

        else if((str[i]=='p')&&(str[j]=='q'))

        {

            f=0;continue;

        }

        else if((str[i]=='q')&&(str[j]=='p'))

        {

            f=0;continue;

        }

        else if((str[i]=='T')&&(str[j]=='T'))

        {

            f=0;continue;

        }

        else if((str[i]=='U')&&(str[j]=='U'))

        {

            f=0;continue;

        }

        else if((str[i]=='V')&&(str[j]=='V'))

        {

            f=0;continue;

        }

        else if((str[i]=='v')&&(str[j]=='v'))

        {

            f=0;continue;

        }

        else if((str[i]=='w')&&(str[j]=='w'))

        {

            f=0;continue;

        }

        else if((str[i]=='W')&&(str[j]=='W'))

        {

            f=0;continue;

        }

        else if((str[i]=='X')&&(str[j]=='X'))

        {

            f=0;continue;

        }

        else if((str[i]=='x')&&(str[j]=='x'))

        {

            f=0;continue;

        }

        else if((str[i]=='Y')&&(str[i]=='Y'))

        {

            f=0;continue;

        }

        else if((str[i]=='A')&&(str[j]=='A'))

        {

            f=0;continue;

        }

        else if((str[i]=='H')&&(str[j]=='H'))

        {

            f=0;continue;

        }

        else

        {

            f=1;break;

        }

    }

    if(f==0 || strcmp(str,"bob")==0 )

    printf("TAK\n");

    else

    printf("NIE\n");

    return 0;

}
