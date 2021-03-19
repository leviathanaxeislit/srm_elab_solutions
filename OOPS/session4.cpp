Q.31 : Play with Fraction

#include <iostream>
       using namespace std;
class Fraction
{
public:
    int numerator, denominator;

    Fraction()
    {
        numerator = 0;
        denominator = 0;
    }

    void getinput()
    {
        cin >> numerator >> denominator;
    }

    Fraction operator+(Fraction obj)
    {
        Fraction temp;
        temp.numerator = (numerator * obj.denominator) + (denominator * obj.numerator);
        temp.denominator = denominator * +obj.denominator;
        return temp;
    }
};

int main()
{
    Fraction f1, f2, add;
    f1.getinput();
    f2.getinput();
    //+obj;
    add = f1 + f2;
    cout << add.numerator << "/" << add.denominator;
    // add.output();

    return 0;
}

Q.32 : Unary

#include <iostream>
       using namespace std;
class data
{
public:
    double x, y;
    double a, b;
    void setdata()
    {
        cin >> x >> y;
        cin >> a >> b;
    }
    void display1()
    {
        cout << x << " " << y;
    }
    void display2()
    {
        cout << a << " " << b;
    }

    data operator*()
    {
        x = -x;
        y = -y;
        a = -a;
        b = -b;
    }
};
int main()
{
    data ob1;
    ob1.setdata();
    *ob1;
    ob1.display1();
    cout << "\n";
    ob1.display2();
    return 0;
}

Q.33 : Savings

#include "iostream"
       using namespace std;
class Money
{
private:
    int rupees, Paise;

public:
    Money()
    {
        cin >> rupees >> Paise;
    }
    Money operator+(Money o)
    {
        Money temp;
        temp.rupees = rupees + o.rupees;
        temp.Paise = Paise + o.Paise;
        return temp;
    }
    Money operator-(Money o)
    {
        Money temp;
        temp.rupees = rupees - o.rupees;
        temp.Paise = Paise - o.Paise;
        return temp;
    }
    void display()
    {
        cout << "Rs=" << rupees << " and " << Paise << " Paise" << endl;
    }
};
int main()
{
    Money M1, M2, M3, M4, M5;
    M4 = M2 - M3;
    M5 = M1 + M4;
    M5.display();
    return 0;
}

Q.34 : Decimal Decrement

#include <iostream>
       using namespace std;
class Decimal
{
    float a;

public:
    void in()
    {
        cin >> a;
    }
    void operator--()
    {
        a = a - 0.10;
        cout << a;
    }
};
int main()
{
    Decimal obj;
    obj.in();
    obj.operator--();
    return 0;
}

Q.35 : Distance

#include "iostream"
       using namespace std;
class Distance
{
private:
    int feet, inches;

public:
    void readDistance(void)
    {
        cin >> feet;
        cin >> inches;
    }

    void dispDistance()
    {
        cout << "Feet:" << feet << " "
             << "Inches:" << inches << endl;
    }
    Distance operator+(Distance &dist1)
    {
        Distance tempD;
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = tempD.inches % 12;
        return tempD;
    }
};
int main()
{
    Distance D1, D2, D3;

    D1.readDistance();
    D2.readDistance();
    D3 = D1 + D2;
    D3.dispDistance();
    return 0;
}

Q.36 : Light House

#include <iostream>
       using namespace std;
class Time
{
    int hours, mins, secs;

public:
    void operator>>(int b)
    {
        cin >> hours >> mins >> secs;
    }
    void operator<<(int b)
    {
        cout << hours << " Hours " << mins << " Mins " << secs << " secs";
    }
};
int main()
{
    Time t;
    int a = 3;
    t.operator>>(a);
    t.operator<<(a);
    return 0;
}

Q.37 : Prefix Increment

#include <iostream>
       using namespace std;
class increment
{
public:
    double a, b, c;
    void getx()
    {
        cin >> a >> b >> c;
    }
    void operator++();
};
void increment::operator++()
{
    a = a + 1.0;
    b = b + 1.0;
    c = c + 1.0;
    cout << a << " " << b << " " << c;
}
int main()
{
    increment obj;
    obj.getx();
    obj.operator++();
    return 0;
}

Q.38 : First Day of College

#include <iostream>
       using namespace std;
class vector
{
private:
    int x, y, z;

public:
    vector()
    {
        cin >> x >> y >> z;
    }
    vector operator+(vector b)
    {
        vector temp;
        temp.x = x + b.x;
        temp.y = y + b.y;
        temp.z = z + b.z;
        cout << "Sum=" << temp.x << "i+" << temp.y << "j+" << temp.z << "z" << endl;
    }
};
int main()
{
    vector a, b, c;
    c = a + b;
    return 0;
}

Q.39 : Concatenate

#include <iostream>
       using namespace std;
class concatenate
{
    char a[100], b[100];

public:
    void read()
    {
        cin >> a >> b;
    }
    void operator+()
    {
        cout << a << b;
    }
};
int main()
{
    concatenate obj;
    obj.read();
    obj.operator+();
    return 0;
}

Q.40 : Travel

#include <iostream>
       using namespace std;

class Distance
{
public:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    // method to display distance
    void displayDistance()
    {
        cout << "Feet=" << feet << " Inches=" << inches << endl;
    }
    // overloaded minus (-) operator
    Distance operator-()
    {
        cout << "Travelling Backwards\n";
        return Distance(-feet, -inches);
    }
    Distance operator+()
    {
        cout << "Travelling Forward\n";
        return Distance(feet, inches);
    }
};

int main()
{
    int m, n;
    cin >> m >> n;
    Distance D1(m, n);
    +D1;
    D1.displayDistance();
    -D1;
    D1.displayDistance();
    return 0;
}