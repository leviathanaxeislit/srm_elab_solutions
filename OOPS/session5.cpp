Q. 41: Payroll

#include <iostream>
using namespace std;

class SingleInheritance{
public:
  string name, gender;
  int salary, age;
  void getDetails(){
    cin >> name >> gender >> age >> salary;
  }
};

class inheritedclass:public SingleInheritance{
public:
  void display(){
    cout << "Name=" << name << "\nGender=" << gender << "\nAge=" << age << "\nSalary=" << salary << endl;
  }
};

int main() {
 inheritedclass tc;
  tc.getDetails();
  tc.display();
 return 0;
}


Q. 42: Square and cube

#include <iostream>
using namespace std;
class Number
{
  public:
  int n;
  void getNumber()
  {
    cin>>n;
  }
  void getSquare()
  {
    cout<<n*n<<endl;
  }
  void getCube()
  {
    cout<<n*n*n<<endl;
  }
};
class Square:public Number
{
  public:
  Square()
  {
    getNumber();
    getSquare();
  }
};
class Cube:public Number
{
  public:
  Cube()
  {
    getNumber();
    getCube();
  }
};
int main()
{
  Square objS;
  Cube objC;
  return 0;
}


Q. 43: Bank

#include<iostream>
#include<math.h>
using namespace std;
class Customer {
public:
char s[100];
public:
void display()
{
cin>>s;
}
};

class Bank{
public:
long num1, num2, num3;
void display()
{
cin>>num1>>num2>>num3;
}
};

class Account:public Customer,public Bank
{
public:
char s[100];
long num1,num2,num3;
void display()
{
cin>>s;
cin>>num1>>num2>>num3;
cout<<"Customer Name="<<s<<endl;
cout<<"Customer Id="<<num1<<endl;
cout<<"Account No="<<num2<<endl;
cout<<"Account Balance="<<num3<<endl;
//Interest Calc

double y = num3;
y = floor((y * 100) + 0.5)/100;
y = y*12*3;
int interest = (int)y;
printf("Interest=%d", interest/100);
}
};

int main() {


Account user;
user.display();
}

Q. 44: Percentage of Student

#include <iostream>
using namespace std;
class AddData
{
  public:
  int mark1,mark2;
  void accept_details()
  {
    cin>>mark1>>mark2;
  }
};
class sports
{
  public:
  int mark3;
  void get()
  {
    cin>>mark3;
  }
};
class Total : public AddData,public sports
{
  public:
  int d;
  void total_of_three_subjects()
  {
    d=(mark1+mark2+mark3)/3;
  }
 
};
class Percentage : public Total
{
  public:
  int e;
  void calculate_percentage()
  {
    e=(mark1+mark2+mark3)/3;
  }
  void show_result()
  {
    cout<<e;
  }
};
int main()
{
  Percentage p;
  p.accept_details();
  p.get();
  p.total_of_three_subjects();
  p.calculate_percentage();
  p.show_result();
  return 0;
}

Q. 45: Rectangle

#include "iostream"
using namespace std;
class Area
{
public:
int getArea(int length, int berth)
{
return length*berth;
}
};
class Perimeter
{
public:
int getPerimeter(int length, int berth)
{
return length+length+berth+berth;
}
};
class Rectangle:public Area,public Perimeter
{

};
int main() {
Rectangle rt;
int l,b;
cin>>l>>b;
cout<<rt.getArea(l,b)<<endl;
cout<<rt.getPerimeter(l,b)<<endl;
return 0;
}

Q. 46: friends in maths tution


#include "iostream"
using namespace std;

class A{
public:
int a;
void display(int a)
{
cin>>a;
}
};

class B{
public:
int b;
void display(int b){
cin>>b;
}
};

class C:public A,public B
{
public:
int a, b;
void display()
{
cin>>a>>b;
cout<<a*b<<endl;
}
}sample;

int main()
{
sample.display();
return 0;
}

Q. 47: Multilevel Inheritance for Student Marklist

#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
class Student{
  protected:
  string firstName;
  string lastName;
  int phone;
  public:
    Student(string fname,string lname,int p){
      firstName=fname;
      lastName=lname;
      phone=p;
    }
  void display(){
    cout<<"First Name: "<<firstName<<"\nLast Name: "<<lastName<<"\nPhone: "<<phone;
  }
};
class Grade:public Student{
  private:
  int score;
  public:Grade(string fname,string lname,int phone,int score):Student(fname,lname,phone){
    Grade::score=score;
  }
  char calculate(){
    char ch;
    if(this->score>0&&this->score<40) ch='D';
    else if(this->score>=40&&this->score<60) ch='C';
    else if(this->score>=60&&this->score<75) ch='B';
    else if(this->score>=75&&this->score<90) ch= 'A';
    else if(this->score>=90&&this->score<=100) ch='O';
    return ch;
  }
};
int main(){
  string firstName,lastName;
  int score,phone;
  cin>>firstName;
  cin>>lastName;
  cin>>phone;
  cin>>score;
  Student*stu=new Grade(firstName,lastName,phone,score);
  stu->display();
  Grade* g = (Grade*)stu;
  cout<< "\nGrade: "<<g->calculate();
  return 0;
}

Q. 48: Counselling

#include <iostream>
using namespace std;

class Student{
  public:
  virtual void getDetails()=0;
  virtual void displayDetails()=0;
};

class StudentDetails:public Student{
  string fname, mname;
  float num;
  public:
  void getDetails(){
    cin >> fname >> mname >> num;
  }
  void displayDetails(){
    cout << fname << endl << mname << endl << num << endl;
  }
};

int main() {
  StudentDetails sd;
  sd.getDetails();
  sd.displayDetails();
 
 return 0;
}

Q. 49: Student and Sports

#include <iostream>
using namespace std;
class student
{
  public:
  int roll_no,mark_1,mark_2;
  void get()
  {
    cin>>roll_no;
    cin>>mark_1;
    cin>>mark_2;
  }
};
class sports
{public:
 int sport_mark;
 void getsm()
 {
   cin>>sport_mark;
 }
};
class statement:public student,public sports
{
public:
int total,average;
void display()
{
total=mark_1+mark_2+sport_mark;
average=(mark_1+mark_2+sport_mark)/3;
cout<<roll_no<<endl;
cout<<total<<endl;
cout<<average;
}
};
int main()
{
  statement obj;
  obj.get();
  obj.getsm();
  obj.display();
  return 0;
}



Q. 50: Examination

#include <iostream>
using namespace std;

class A{ 
public:
  int x;
};

class B:public A{ 
public:
 B()
  {
    cin >> x;
 }
};
class C{
public:
  int y;
  C(){
    cin >> y;
  }
};
class D:public B,public C
{
public:
  void sum()
  {
  int sum;
  sum=x+y;
    cout << "Sum= " << sum << endl;
  }
};

int main() {
  D obj;
  obj.sum();
 return 0;
}