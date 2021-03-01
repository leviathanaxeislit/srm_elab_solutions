// Q. 11: Inner and Outer

#include <iostream>
using namespace std;

class outer
{
public:
    int x;
    void get()
    {
        cin >> x;
    }

    class inner
    {
    private:
        int y;

    public:
        void get()
        {
            cin >> y;
        }
        void sum()
        {
            outer k;
            k.get();
            cout << k.x + y;
        }
    };
};
main()
{
    outer::inner b;
    b.get();
    b.sum();
}

// Q. 12: DATE CLASS

#include <iostream>
using namespace std;
class Date
{
    int day, month, year;

public:
    Date()
    {
        cin >> day >> month >> year;
    }
    void getDate()
    {
        switch (month)
        {
        case 1:
            cout << "January ";
            break;
        case 2:
            cout << "February ";
            break;
        case 3:
            cout << "March ";
            break;
        case 4:
            cout << "April ";
            break;
        case 5:
            cout << "May ";
            break;
        case 6:
            cout << "June ";
            break;
        case 7:
            cout << "July ";
            break;
        case 8:
            cout << "August ";
            break;
        case 9:
            cout << "September ";
            break;
        case 10:
            cout << "October ";
            break;
        case 11:
            cout << "November ";
            break;
        case 12:
            cout << "December ";
            break;
        }
        cout << day << " " << year;
    }
};
int main()
{
    Date D;
    D.getDate();
    return 0;
}

//Q. 13: Online Shopping

#include <iostream>
using namespace std;
class item
{
public:
    int items;
    int itemCode[20];
    float price[20];
    void initialize()
    {
        cin >> items;
        int i;
        for (i = 0; i < items; i++)
        {
            cin >> itemCode[i] >> price[i];
        }
    }
    float largest()
    {
        int i, largest = price[0];
        for (i = 1; i < items; i++)
        {
            if (price[i] > largest)
                largest = price[i];
        }
        return largest;
    }
    float sum()
    {
        float sum = 0;
        int i;
        for (i = 0; i < items; i++)
        {
            sum += price[i];
        }
        return sum;
    }
    void displayitems()
    {
        cout << "Code and Price" << endl;
        int i;
        for (i = 0; i < items; i++)
        {
            cout << itemCode[i] << " and " << price[i] << endl;
        }
    }
};
int main()
{
    item I;
    I.initialize();
    cout << "Largest Price=" << I.largest() << endl;
    cout << "Sum of Prices=" << I.sum() << endl;
    I.displayitems();
    return 0;
}

//Q. 14: Bhagavan the Inspirational Teacher

#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;

    float height, weight;
    student()
    {
        name = "Bhagavan";
        roll = 1593;
        height = 172.5;
        weight = 60.4;
    }

    void readinput()
    {
        cin >> name;
        cin >> roll;
        cin >> height;
        cin >> weight;
    }
    void displaydata()
    {
        cout << name;
        cout << " " << roll;
        cout << " " << height;
        cout << " " << weight << endl;
    }
};

int main()
{

    student s1, s2;

    s1.readinput();
    s1.displaydata();
    s2.displaydata();
    return 0;
}

// Q. 15: Athithya Karihalan and his Hobby

#include <iostream>
#include <math.h>
using namespace std;
class Building
{
private:
    int length, width, ratePerSqFeet;

public:
    void initializeData(int l, int w, int r)
    {
        length = l;
        width = w;
        ratePerSqFeet = r;
    }
    void getLength(int length, int width, int ratePerSqFeet)
    {
        cout << "Length : " << length << endl;
    }
    void getWidth()
    {
        cout << "Width : " << width << endl;
    }
    void getRatePerSqFeet()
    {
        cout << "Rate Per SqFt : " << ratePerSqFeet << endl;
    }
    void calculateCost()
    {
        int z;
        z = length * width * ratePerSqFeet;
        cout << "Cost of the Building : " << z << endl;
    }
    void determineSuitability()
    {
        if (length == 60)
        {
            if (abs(length - width) > 10)
                cout << "Suitability : Suitable";
        }
        else if (length == width)
            cout << "Suitability : Suitable";
        else if (abs(length - width) < 10)
        {
            cout << "Suitability : Suitable" << endl;
        }
        else
        {
            cout << "Suitability : Not Suitable" << endl;
        }
    }
} objname;
int main()
{
    int l, w, r;
    cin >> l >> w >> r;
    objname.initializeData(l, w, r);
    objname.getLength(l, w, r);
    objname.getWidth();
    objname.getRatePerSqFeet();
    objname.calculateCost();
    objname.determineSuitability();
    return 0;
}

//Q. 16: TNEB Billing

#include <iostream>
using namespace std;
class Electric
{
    float unit;
    char name[20];

public:
    void accept()
    {

        cin >> name;

        cin >> unit;
    }
    void print_bill();
};
void Electric::print_bill()
{
    float bill = 0.0;
    if (unit >= 0 && unit <= 100)
        bill = (500 + (unit * 0.40));
    else if (unit > 100 && unit <= 300)
        bill = (500 + (100 * 0.40) + ((unit - 100) * 0.50));
    else if (unit > 300)
        bill = (500 + (100 * 0.40) + (200 * 0.50) + ((unit - 300) * 0.60));
    if (bill > 250)
        bill = (bill + (bill * (15 / 100)));
    cout << "\nConsumer Name:" << name;
    cout << "\nConsumed:" << unit;

    cout << "\nBill to pay:" << bill;
}

int main()

{

    Electric e[10];

    int i, cnt;

    cin >> cnt;

    cout << "\nNumber of Consumers:" << cnt;

    for (i = 0; i < cnt; i++)

        e[i].accept();

    for (i = 0; i < cnt; i++)

        e[i].print_bill();

    return 0;
}

//Q. 16: TNEB Billing

#include <iostream>
using namespace std;
class Electric
{
    float unit;
    char name[20];

public:
    void accept()
    {

        cin >> name;

        cin >> unit;
    }
    void print_bill();
};
void Electric::print_bill()
{
    float bill = 0.0;
    if (unit >= 0 && unit <= 100)
        bill = (500 + (unit * 0.40));
    else if (unit > 100 && unit <= 300)
        bill = (500 + (100 * 0.40) + ((unit - 100) * 0.50));
    else if (unit > 300)
        bill = (500 + (100 * 0.40) + (200 * 0.50) + ((unit - 300) * 0.60));
    if (bill > 250)
        bill = (bill + (bill * (15 / 100)));
    cout << "\nConsumer Name:" << name;
    cout << "\nConsumed:" << unit;

    cout << "\nBill to pay:" << bill;
}

int main()

{

    Electric e[10];

    int i, cnt;

    cin >> cnt;

    cout << "\nNumber of Consumers:" << cnt;

    for (i = 0; i < cnt; i++)

        e[i].accept();

    for (i = 0; i < cnt; i++)

        e[i].print_bill();

    return 0;
}

//Q. 17: Digital Library

#include <iostream>
using namespace std;
class Library
{
public:
    string name;
    int r, bc, c = 0;

    Library(int a, string s, int b)
    {
        name = s;
        r = a;
        bc = b;
    }

    void show()
    {
        cout << "Roll No:" << r << endl
             << "Name of the Student:" << name << endl
             << "Code of Book Accessed:" << bc << endl;
    }

    void count()
    {
        c++;
    }
};

int main()
{
    int s, p, q, r;
    string n, m;
    cin >> s >> n >> p >> q >> m >> r;

    Library lib1(s, n, p);
    lib1.show();
    Library lib2(q, m, r);
    lib2.show();
    return 0;
}

//Q. 18: Land Survey

#include <iostream>

using namespace std;

class room
{
    int l, b, h;
public:
    void getroom()

    {
        cin >> l >> b >> h;
    }

    void putroom()

    {
        cout << "Length=" << l;

        cout << endl;

        cout << "Breadth=" << b;

        cout << endl;

        cout << "Height=" << h;

        cout << endl;
    }
};

class address
{
    int hno;

    char cty[30];

    char state[30];

public:
    void getad()

    {

        cin >> hno;

        cin >> cty;

        cin >> state;
    }

    void putad()

    {

        cout << "House No=" << hno;

        cout << endl;

        cout << "City=" << cty;

        cout << endl;

        cout << "State=" << state;

        cout << endl;
    }
};

class house
{
    char housename[30];

    address a;

    room r[10];

    int n;

public:
    void input();

    void display();
};

void house ::input()

{

    cin >> housename;

    cout << "House name=" << housename << endl;

    a.getad();

    a.putad();

    cin >> n;

    for (int i = 0; i < n; i++)

    {
        r[i].getroom();
    }
}

void house ::display()

{
    for (int i = 0; i < n; i++)

    {
        cout << "Details of Room " << i + 1 << "\n";

        r[i].putroom();
    }
}

int main()

{
    house x;

    x.input();

    x.display();

    return 0;
}

// Q. 19: lomda

#include <iostream>
using namespace std;
class partner
{
public:
    void findpartner()
    {
        int n = 0, s = 0, i = 0;
        cin >> n;
        if (1 <= n && n <= 8)
        {
            int arr[n];
            for (i = 0; i < n; i++)
            {
                cin >> arr[i];
                if (arr[i] <= 8)
                {
                    if (arr[i] == 1)
                        cout << "4LB\n";
                    else if (arr[i] == 5)
                        cout << "2MB\n";
                    else if (arr[i] == 3)
                        cout << "6UB\n";
                    else if (arr[i] == 2)
                        cout << "5MB\n";
                    else if (arr[i] == 4)
                        cout << "1LB\n";
                    else if (arr[i] == 6)
                        cout << "3UB\n";
                }
            }
        }
    }
};
int main()
{
    partner objname;
    objname.findpartner();

    return 0;
}

//Q. 20: RBI

#include <iostream>
#include <string.h>
using namespace std;
class Bank
{
private:
    char name[50];
    char accounttype[50];
    int acc;
    double balance;

public:
    void initial()
    {
        std::cin >> name >> acc >> accounttype >> balance;
    }
    void deposit()
    {
        float deposit;
        cin >> deposit;
        balance += deposit;
    }
    void withdraw()
    {
        float withdraw;
        cin >> withdraw;
        if (withdraw > balance)
        {
            cout << "Insufficient amount\n";
        }
        else
            balance -= withdraw;
    }
    void disp() { cout << "NAME=" << name << "\nACCNO=" << acc << "\nTYPE=" << accounttype << "\nBALANCEAMOUNT=" << balance << endl; }
};

int main()
{
    float deposit, withdraw;
    Bank obj;
    obj.initial();
    obj.deposit();
    obj.withdraw();
    obj.disp();
    return 0;
}
