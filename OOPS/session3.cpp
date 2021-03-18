Q.21 : Saravana Stores

#include "iostream"
       using namespace std;
class Salary
{
public:
    int Increment(int currsal)
    {
        return currsal;
    }
    int Increment(int currsal, int bonus)
    {
        int c;
        c = currsal + bonus;
        return c;
    }
};
int main()
{
    int currsal, bonus;
    cin >> currsal >> bonus;
    Salary ob;

    cout << ob.Increment(currsal) << endl;
    cout << ob.Increment(currsal, bonus) << endl;
    return 0;
}

Q.22 : Smart Appraisal System

#include <iostream>
#include <string.h>
       using namespace std;
class TestClass
{
public:
    class Appraisal
    {
        int sal;

    public:
        void in()
        {
            cin >> sal;
        }
        void out()
        {
            cout << "\nNew Salary:" << sal;
        }
        Appraisal()
        {
            sal = 30000;
            cout << "Old Salary:" << sal;
        }
    };
};
int main()
{

    TestClass::Appraisal myobj;
    TestClass::Appraisal myobj2();
    myobj.in();
    myobj.out();
    return 0;
}

Q.23 : BCD Game

#include "iostream"
       using namespace std;

class Code
{
    int number;

public:
    void initializeData(int n)
    {
        number = n;
    }
    int convertToStraightBinary()
    {
        int binaryNum[12];
        int i = 0;
        while (number > 0)
        {
            binaryNum[i] = number % 2;
            number = number / 2;
            i++;
        }
    FILL:
        if (i < 12)
        {
            binaryNum[i] = 0;
            i++;
            goto FILL;
        }
        for (int j = i - 1; j >= 0; j--)
            cout << binaryNum[j];
    }
};

int main()
{
    Code obj;
    int n;
    cin >> n;
    obj.initializeData(n);
    obj.convertToStraightBinary();
    return 0;
}

Q.24 : Limka Book of Records

#include "iostream"
       using namespace std;
class Welcomemsg
{
public:
    char msg(char fstname[100])
    {
        cout << "Hi " << fstname << endl;
        return 0;
    }
    char msg(char fstname[100], char lstname[100])
    {
        cout << "Welcome " << fstname << " " << lstname << endl;
        return 0;
    }
};
int main()
{
    Welcomemsg ob;
    char first_name1[100], first_name2[100], last_name2[100];
    cin >> first_name1 >> first_name2 >> last_name2;
    ob.msg(first_name1);
    ob.msg(first_name2, last_name2);
    return 0;
}

Q.25 : Store Keeper

#include "iostream"
       using namespace std;
class Store
{
public:
    int itemcount(int id)
    {
        return id;
    }
    int itemcount(int totalavl, int consumed)
    {
        return totalavl - consumed;
    }
};
int main()
{
    int id, a, b;
    int item, lol;
    cin >> id >> a >> b;

    Store ob;
    item = ob.itemcount(id);
    cout << item << endl;
    lol = ob.itemcount(a, b);
    cout << lol;

    return 0;
}

Q.26 : CUB

#include <iostream>
       using namespace std;

class AccBalance
{
public:
    string val;

    AccBalance()
    {
        val = "Zero Balance";
        cout << val << endl;
    }

    AccBalance(float bal)
    {
        if (bal < 0)
        {
            cout << "Negative";
        }
        else if (bal > 0)
        {
            cout << "Positive";
        }
        else
        {
            cout << "Zero";
        }
    }
};
int main()
{
    AccBalance defltBal;
    float x;
    cin >> x;
    AccBalance currBal(x);

    return 0;
}

Q.27 : Business Man

#include <iostream>
       using namespace std;
class TestClass
{
public:
    class profit
    {
        int Income = 0, Expenses;

    public:
        void in()
        {
            cin >> Income >> Expenses;
        }
        void out()
        {
            cout << Income - Expenses;
        }
        profit()
        {
            Income = 0;
            Expenses = 0;
        }
        profit(int income, int expenses)
        {
            Income = income;
            Expenses = expenses;
        }
    };
};
int main()
{
    TestClass ::profit s1(0, 0);
    s1.in();
    s1.out();
    return 0;
}

Q.28 : Database Administrator

#include <iostream>
#include <string.h>
       using namespace std;

class StudentData
{
    char stuName[50];

public:
    StudentData()
    {
        cout << "Student Name is: New Student" << endl;
    }
    StudentData(char *n)
    {
        strcpy(stuName, n);
        cout << "Student Name is: " << stuName;
    }
};

class TestClass
{
    char n[50];

public:
    TestClass()
    {
        StudentData myobj;
        cin >> n;
        StudentData myobj2(n);
    }
};

int main()
{
    TestClass t;
    return 0;
}

Q.29 : Hospital Bill

#include "iostream"
       using namespace std;
class Hospital
{
public:
    float bill(float medicines, float days)
    {
        float sum = medicines * days;
        return sum;
    }
    int bill(int room, int days)
    {
        int sum = room * days;
        return sum;
    }
};

int main()
{
    Hospital ob;
    float a, b;
    cin >> a >> b;
    float sum1 = ob.bill(a, b);
    cout << sum1 << endl;
    cin >> a >> b;
    float sum2 = ob.bill(a, b);
    cout << sum2 << endl;
    return 0;
}

Q.30 : Efficiency of Car

#include <iostream>
       using namespace std;
class Car
{
public:
    float startMiles, endMiles, litres;
    float perlitre;
    void initializeData(float s, float e, float l)
    {
        cin >> startMiles >> endMiles >> litres;
    }
    float getstartMiles()
    {
        return startMiles;
    }
    float getEndMiles()
    {
        return endMiles;
    }
    float getLitres()
    {
        return litres;
    }
    double calculateMPL()
    {
        perlitre = (endMiles - startMiles) / litres;
        return perlitre;
    }
    string isEconomycar()
    {
        if (perlitre > 18)
            return "true";
        else if (perlitre < 18)
            return "false";
        else
            return "Improper readings";
    }
};
int main()
{
    Car obj;
    float a, b, c;
    obj.startMiles;
    obj.endMiles;
    obj.litres;
    obj.perlitre;
    obj.initializeData(a, b, c);
    if (obj.calculateMPL() >= 0)
    {
        cout << obj.getstartMiles() << endl;
        cout << obj.getEndMiles() << endl;
        cout << obj.calculateMPL() << endl;
        cout << obj.getLitres() << endl;
        cout << obj.isEconomycar() << endl;
    }
    else
        cout << "Improper readings" << endl;
    return 0;
}
