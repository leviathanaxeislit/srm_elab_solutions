Q. 21: AR12

#include<stdio.h> 
int main() {
int n,i,a[10];
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}
if(a[0]>a[1]&&a[2]>a[1]&&a[2]>a[3]&&a[4]>a[3])
printf("%d",n-2);
else
printf("%d",n);
return 0;
}

Q. 22: AR9

 #include <stdio.h>
    #include <string.h>
    void main()
    {

        char name[10][8], tname[10][8], temp[8];
        int i, j, n;

        scanf("%d", &n);
     
        for (i = 0; i < n; i++)
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }

        for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }

     
        for (i = 0; i < n; i++)
        {
            printf("%s\n", name[i]);
        }
 
    }

    Q. 23: AR13

    #include <iostream>

float findMean(int arr[], int N)
{
float sum =0;
int i;
for(i=0; i<N; i++)
{
sum = sum + arr[i];
}
return sum/N;
}

int main() {
int n, arr[100],i;
float mean;
scanf("%d",&n);

for(i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}

printf("%.2f", findMean(arr, n));

return 0;
}

Q. 24: AR2

#include <stdio.h>
int main()
{
int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
       printf("%d ",a[i]);
    }
    return 0;
}

Q. 25: AR14

#include <iostream>
using namespace std;
int findSum(int A[], int n)
{
  int sum=0;
  for (int i=0;i<n;i++)
  {
    sum+=A[i];
  }
  return sum;
}

int main() {int n,  a[50];
            cin>>n;
            for(int i=0;i<n;i++)
              cin>>a[i];
            int Sum=findSum(a,n);
            cout<<Sum;
// cout<<"Hello World";
return 0;
           }

Q. 26: AR15

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{

}
int main() {
int a[10],b[10],c[20],n1,n2,i,j,k;
    cin>>n1>>n2;
   for(i=0;i<n1;i++)
   {
     cin>>a[i];
   }
  for(j=0;j<n2;j++)
  {
    cin>>b[j];
  }

  std::copy(b,b+n2,std::copy(a,a+n1,c)); 
  sort(c,c+n1+n2);
  for(i=0;i<n1+n2;i++)
  cout<<c[i]<<" ";
}

Q. 27: AR11

#include<bits/stdc++.h>
using namespace std;
int maxSum(int a[], int n, int k)
{
   
    int maxSum[n];
    maxSum[0] = a[0];
 
   
    int curr_max = a[0];
    for (int i = 1; i < n; i++)
    {
        curr_max = max(a[i], curr_max+a[i]);
        maxSum[i] = curr_max;
    }
 
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += a[i];
 
    int result = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum + a[i]-a[i-k];
 
        result = max(result, sum);
 
        result = max(result, sum + maxSum[i-k]);
    }
    return result;
}
 
int main()
{
    int a[100],k=5,i,n; cin>>n;
   for(i=0;i<n;i++)
     cin>>a[i];
    cout << maxSum(a, n, k);
    return 0;
}

Q. 28: AR16

#include <iostream>
using namespace std;
void printTwoOdd(int arr[], int size) 
{ 
    int xor2 = arr[0];
    int set_bit_no;
    int i; 
    int n = size - 2; 
    int x = 0, y = 0;
    for(i = 1; i < size; i++) 
        xor2 = xor2 ^ arr[i]; 
    set_bit_no = xor2 & ~(xor2-1);
    for(i = 0; i < size; i++) 
    {
        if(arr[i] & set_bit_no) 
        x = x ^ arr[i]; 
        else
        y = y ^ arr[i]; 
    } 
  if(x>y)
    cout<<x<<" "<<y<<" "<<endl; 
  else
    cout<<y<<" "<<x<<" "<<endl;
}
int main() 
{ 
  int t;
  cin>>t;
  while(t--)
  {
    int arr[100],arr_size;
  cin>>arr_size;
  for(int i=0;i<arr_size;i++)
  {
    cin>>arr[i];
  }
    printTwoOdd(arr, arr_size); 
  }
    return 0; 
}

Q. 30: AR8

#include"stdio.h"
int main()
{int a[10],b,i,j,n;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i;j<n;j++)
  {
    if(a[i]>a[j])
   {
   b=a[i];
   a[i]=a[j];
  a[j]=b;
 }
 }
 }
 for(i=0;i<n;i++)
 {
 if(a[i]%2!=0)
   printf("%d\n",a[i]);
 }
 for(i=0;i<n;i++)
 {
 if(a[i]%2==0)
 printf("%d\n",a[i]);
 }

 return 0;
}