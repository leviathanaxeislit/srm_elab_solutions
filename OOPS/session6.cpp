Q.51 : Super Market

#include <iostream>
       using namespace std;
class consumer
{
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};

class transaction : public consumer
{
public:
    int c, q, p, tp;
    long t;
    char n[100];
    void getdata()
    {
        cin >> n >> c >> t >> q >> p >> tp;
    }
    void display()
    {
        cout << "Name : " << n << endl;
        cout << "Code : " << c << endl;
        cout << "Telephone : " << t << endl;
        cout << "Quantity : " << q << endl;
        cout << "Price : " << p << endl;
        tp = q * p;
        cout << "Total Price : " << tp << endl;
    }
};

int main()
{
    consumer *c;
    transaction t;
    c = &t;
    c->getdata();
    c->display();
    return 0;
}

Q.52 : District Sports Meet

#include <iostream>
       using namespace std;
class Sports
{
public:
    virtual void getdata();
    virtual void display();
};
void Sports::getdata()
{
}
void Sports::display()
{
}
class Student : public Sports
{
private:
    long roll;
    string name;

public:
    void getdata()
    {
        cin >> roll >> name;
    }
    void display()
    {
        cout << "Student Name is: " << name;
        cout << "\nStudent Roll no is: " << roll;
    }
};
int main()
{

    Student o;

    o.Student::getdata();
    o.Student::display();
    return 0;
}

Q.53 : Difference Problem

#include <iostream>
       using namespace std;
class parent
{
public:
    virtual void difference(int a, int b) = 0;
};
class child : public parent
{
public:
    int z;
    void difference(int a, int b)
    {
        z = a - b;
        cout << "Difference=" << z;
    }
};
int main()
{
    parent *p;
    child c;
    p = &c;
    int a, b;
    cin >> a >> b;
    p->difference(a, b);
    return 0;
}

Q.54 : ONGC

#include <iostream>
       using namespace std;
class Employee
{
public:
    virtual int getSalary() = 0;
};
class Developer : public Employee
{
public:
    int salary;
    int getSalary()
    {
        cin >> salary;
        cout << "Salary of Developer : " << salary << endl;
        //cout<<"Salary of Driver : "<<salary;
    }
};
class Driver : public Employee
{
public:
    int salary;
    int getSalary()
    {
        cin >> salary;
        //cout<<"Salary of Developer : "<<salary;
        cout << "Salary of Driver : " << salary;
    }
};

int main()
{
    Developer d;
    d.getSalary();
    Driver w;
    w.getSalary();
    return 0;
}

Q.55 : Multiples

#include <iostream>
       using namespace std;

class base
{
public:
    virtual void mTable() = 0;
};

class derived : public base
{
    int i1, i2;

public:
    void input()
    {
        cin >> i1;
    }
    void mTable()
    {
        cout << i1 * 1 << " " << i1 * 2 << " " << i1 * 3 << " " << i1 * 4 << " " << i1 * 5 << endl;
    }
};

int main()
{

    base *b;
    derived d;
    b = &d;
    d.input();
    b->mTable();
    return 0;
}

Q.56 : Kajal and her Shopping

#include <iostream>
       using namespace std;
class Bill
{
public:
    int a, b;
    void getamount()
    {
        cin >> a >> b;
    }
    friend float billavg(Bill &, int, int);
};
float billavg(Bill &x, int a, int b)
{
    float y;
    y = (float)(a + b);
    return y / 2;
}
int main()
{
    Bill obj;
    obj.getamount();
    cout << "Average amount spent:" << billavg(obj, obj.a, obj.b);
    return 0;
}

Q.57 : Varun and his Students

#include <iostream>
       using namespace std;

class parent
{
public:
    virtual float average(int a, int b, int c) = 0;
};

class child : public parent
{
public:
    float average(int a, int b, int c)
    {
        return (a + b + c) / 3.0f;
    }
};

int main()
{

    parent *p;
    child c;
    p = &c;
    int a, b, d;
    cin >> a >> b >> d;
    cout << "Average=" << p->average(a, b, d);
    return 0;
}

Q.58 : Numbers

#include <iostream>
       using namespace std;

class Super
{
public:
    virtual void nSum() = 0;
};

class Sub : public Super
{
    int n, b, c;

public:
    void read()
    {
        cin >> n;
    }
    void nSum()
    {
        cout << (n * (n - 1) / 2) + n << endl;
    }
};

int main()
{

    Super *s;
    Sub sb;
    s = &sb;
    sb.read();
    s->nSum();
    return 0;
}

Q.59 : Jaganath and his Juniours

#include <iostream>
       using namespace std;

class Point
{
    int px;

public:
    Point(int px)
    {
        this->px = px;
    }

    void show()
    {
        cout << px << endl;
    }

    friend void operator++(Point &);
};

void operator++(Point &p)
{
    p.px++;
}

int main()
{
    int px;
    cin >> px;
    Point ob1(px);
    ++ob1;
    ob1.show();
    return 0;
}

Q.60 : Polio

#include <iostream>
       using namespace std;
class country
{
public:
    virtual void getdata() = 0;
    virtual void display() = 0;
};

class state : public country
{
public:
    char a[20];
    int b, c;
    char d[20];
    int e, f;
    void getdata()
    {
        cin >> a >> b >> c >> d >> e >> f;
    }
    void display()
    {
        cout << "Country Name " << a;
        cout << endl
             << "Country Polio% " << b;
        cout << endl
             << "Country Litteracy%" << c;
        cout << endl
             << "The Measure of Interdependency " << (float)b / c;
        cout << endl
             << "State Name " << d;
        cout << endl
             << "%Age of Polio of State " << e;
        cout << endl
             << "%Age of Literacy of State " << f;
        cout << endl
             << "The Measure of Interdependency " << (float)e / f;
    }
};
int main()
{
    state s;
    s.getdata();
    s.display();
    return 0;
}
