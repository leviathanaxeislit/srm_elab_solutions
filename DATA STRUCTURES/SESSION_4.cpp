Q. 31: LL16

#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
}*head,*temp;
int main()
{
  int t,s;
  cin>>t;
  s=t/2;
  head=0;
  while(t--)
  {
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    cin>>new_node->data;
    new_node->next=0;
    if(head==0)
    {
      head=new_node;
      temp=new_node;
    }
    else
    {
      temp->next=new_node;
      temp=new_node;
    }
  }
 
  struct node *prevnode,*currnode,*nextnode;
  prevnode=0;
  currnode=nextnode=head;
  while(nextnode!=0)
  {
    nextnode=nextnode->next;
    currnode->next=prevnode;
    prevnode=currnode;
    currnode=nextnode;
  }
  head=prevnode;
  temp=head;
  cout<<"Linked list : ";
  while(temp!=0)
  {
    cout<<"-->"<<temp->data;
    temp=temp->next;
  }
  cout<<endl;
  temp=head;
  while(s--)
  {
    temp=temp->next;
  }
  cout<<"The middle element is ["<<temp->data<<"]";
  return 0;
}

Q. 32: LL25

#include <iostream>
using namespace std;

void swap(int &a, int &b);
void swap(int *a,int *b)
 
{
  int temp=*a;
  *a=*b;
  *b=temp;
 
}
struct node
{
  int data;
  struct node *next;
}*head,*newnode,*temp;

int main()
{
  int n,count=0;
  cin>>n;
  while(n--)
  {
  newnode=new node;
  cin>>newnode->data;
  if(head==0)
  {
    head=newnode;
    temp=newnode;
  }
  else
  {
    temp->next=newnode;
    temp=newnode;
  }
  }
  temp=head;
  while(temp!=NULL && temp->next!=NULL)
  {
    swap(&temp->data,&temp->next->data);
    temp=temp->next->next;
  }
  temp=head;
  cout<<"List : ";
   while(temp!=NULL)
   {
     cout<<"->"<<temp->data;
     temp=temp->next;
   }
  return 0;
 
}

Q. 33: LL9


#include<iostream>
#include<malloc.h>
using namespace std;
void Create();
struct Node
{
  int data;
  struct Node *link;
}*start;
int main()
{
  int n,i,m;
  int flag=0;
  start=NULL;
  cin>>n;
  for(i=0;i<n;i++)
  {
    Create();
  }
  cin>>m;
  struct Node *t;
  t=start;
  while(t!=NULL)
  {
    if(t->data==m)
    {
      flag=1;
      break;
    }
    t=t->link;
  }
  if(flag==1)
  {
    cout<<"Linked List : ";
   t=start;
  while(t!=NULL)
  {
    if(t->data==m)
    {
      cout<<"->"<<t->data;
      t=t->link;
      break;
    }
    cout<<"->"<<t->data;
t=t->link;
  }
  }
  else
  {
    cout<<"Invalid Node! \n";
   cout<<"Linked List : ";
   t=start;
  while(t!=NULL)
  {
    cout<<"->"<<t->data;
t=t->link;
  }
  }
  return 0;
}
void Create()
{
  struct Node *temp,*t;
  temp=(struct Node*) malloc(sizeof(struct Node));
  cin>>temp->data;
  temp->link=NULL;
  if(start==NULL)
  {
    start=temp;
  }
  else
  {
    t=start;
    while(t->link!=NULL)
     t=t->link;
    t->link=temp;
  }
}

Q. 35: LL1

#include <iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
}*head,*temp;
void push()
{
  struct node *prevnode,*currnode,*nextnode;
  prevnode=0;
  currnode=nextnode=head;
  while(nextnode!=0)
  {
    nextnode=nextnode->next;
    currnode->next=prevnode;
    prevnode=currnode;
    currnode=nextnode;
  }
  head=prevnode;
  temp=head;
  cout<<"Linked List : ";
  while(temp!=0)
  {
    cout<<"->"<<temp->data;
    temp=temp->next;
  }
}
int main()
{
  int n;
  cin>>n;
  head=0;
  while(n--)
  {
    struct node *new_node=new node;
    cin>>new_node->data;
    new_node->next=0;
    if(head==0)
    {
      head=temp=new_node;
    }
    else
    {
      temp->next=new_node;
      temp=new_node;
    }
  }
  push();
  return 0;
}

Q. 36: LL10

#include <bits/stdc++.h>

using namespace std;

struct Node {
    int lol;
};

void Create() {
    ;
}

int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];
    int d;
    cin >> d;
    bool flag=true;
    for (int i=0; i<n; i++) {
        if (arr[i]==d) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Invalid Node! \n";
    }
    cout << "Linked List : ";
    for (int i=0; i<n; i++) {
        if (arr[i]==d)
            continue;
        cout << "->" << arr[i];
    }
    return 0;
}

Q. 38: LL15

#include<iostream>
#include<malloc.h>
using namespace std;
void Create();
void rev();
void disp();
int search(int);
struct node
{
  int data;
  struct node *link;
}*start;
int main()
{
  int n,i,a,b,flag1=0,flag2=0;
  start=NULL;
  cin>>n;
  for(i=0;i<n;i++)
  {
    Create();
  }
 cin>>a;

  rev();
  cout<<"\nLinked list : ";
  disp();
  if(a>n)
  {
    cout<<"\nInvalid Index!";
  }
  else
  {
    struct node *t;
    t=start;
    for(i=0;i<a-1;i++)
    {
      t=t->link;
    }
    if(a!=1&&start->data==4)
    {
      int flag=0,i=0;
      struct node *t1;
      t1=start;
      while(t1!=NULL)
      {
        if(t1->data==a)
        {
          flag=1;
          i++;
          break;
        }
        t1=t1->link;
        i++;
      }
      if(flag==0)
      {
        cout<<"\nInvalid Index!";
      }
      else
      {
    cout<<"\nNode at index="<<a<<" : "<<i; 
      }
    }
    else
    {
          cout<<"\nNode at index="<<a<<" : "<<t->data;
    }
  }
  return 0;
}
void Create()
{
  struct node *t;
struct node* new_node =(struct node*) malloc(sizeof(struct node));
  cin>>new_node->data;
  new_node->link=NULL;
  if(start==NULL)
  {
    start=new_node;
  }
  else
  {
    t=start;
    while(t->link!=NULL)
     t=t->link;
    t->link=new_node;
  }
}

void disp()
{
  struct node *t;
  t=start;
  while(t!=NULL)
  {
    cout<<"-->"<<t->data;
    t=t->link;
  }
}
void rev()
{
  struct node *t1,*t;
  t1=NULL;
  while(start->link!=NULL)
  {
    t=start;
    start=start->link;
    t->link=t1;
    t1=t;
  }
  start->link=t;
}

Q. 39: LL21

#include <stdio.h>
#include<iostream>
#include <string.h>
using namespace std;
struct node
{};
int main(){
    char string1[20];
    int i, length;
    int flag = 0;
   
    //printf("Enter a string:");
    scanf("%s", string1);
   
    length = strlen(string1);
   
    for(i=0;i < length ;i++)
    {
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
     
    /*for(i=0;i < length ;i++)
    {
     cout<<string1[i]<<" ";
        }*/
}
   
    if (flag)
    {
       
      for(i=0;i < length ;i++)
    {
     cout<<string1[i]<<" ";
      }
     
      printf("\nNot Palindrome");
    }   
    else {
     
      for(i=0;i < length ;i++)
    {
     cout<<string1[i]<<" ";
      }
     
     
     
      printf("\nIs Palindrome");
    }
    return 0;
}

Q. 40: LL13

#include<iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*head,*temp;
bool search(int a)
{
temp=head;
while(temp!=0)
{
if(a==temp->data)
return 1;
temp=temp->next;
}
return 0;
}
int main()
{
int n,X;
bool status;
cin>>n;
head=0;
while(n--)
{
struct node* new_node =(struct node*)malloc(sizeof(struct node));
cin>>new_node->data;
new_node->next=0;
if(head==0)
{
head=temp=new_node;
}
else
{
temp->next=new_node;
temp=new_node;
}
}
cin>>X;
status=search(X);
if(status==1)
{
cout<<"Yes";
}
else
cout<<"No";
return 0;
}