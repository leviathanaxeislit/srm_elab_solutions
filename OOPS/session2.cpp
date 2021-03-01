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
