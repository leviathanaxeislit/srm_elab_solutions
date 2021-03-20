Q.71 : Palindrome

#include <iostream>
#include <string.h>
       using namespace std;
int main()
{
    int d = 1, j = 0, i;
    char a[100], b[100];
    cin >> a;
    for (i = strlen(a) - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    // cout<<a<<endl<<b;
    try
    {
        if (strcmp(a, b) == 0)
            cout << a << " is a palindrome";
        else
            throw(d);
    }
    catch (int e)
    {
        cout << a << " is not a palindrome";
    }
    return 0;
}

Q.72 : Checking Valid Data

#include <iostream>
#include <math.h>
       using namespace std;
int main()
{
    int a;
    try
    {
        cin >> a;
        if (cin)
        {
            if (a > 0 && a <= 100)
            {
                cout << "Valid Mark";
            }
            else
            {
                cout << "Invalid Mark";
            }
        }

        else
        {
            throw a;
        }
    }
    catch (int a)
    {
        cout << "Invalid input. Try again";
    }
    return 0;
}

Q.73 : Check input

#include <iostream>
       using namespace std;

int main()
{
    int nr = 0;
    char ch;
    try
    {
        cin >> nr;
        if (cin)
        {
            cin.get(ch);
            if (ch == '.')
            {
                cout << "Floting" << endl;
            }
            else
            {
                cout << "Integer" << endl;
            }
        }
        else
        {
            throw nr;
        }
    }
    catch (int nr)
    {
        cout << "Invalid input";
    }
    return 0;
}

Q.74 : Length of string

#include <iostream>
#include <cstring>
       using namespace std;
int main()
{
    string str;
    cin >> str;
    int length = str.length();
    try
    {
        if (str.empty() || str.length() == 1)
            throw("Invalid input");
        cout << "Length of the string is: " << length;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}

Q.75 : Divide by zero exception

#include <iostream>
#include <ctype.h>
       using namespace std;
int main()
{
    int a, b = 244;
    cin >> a >> b;
    try
    {
        if (b != 0 && b != 244)
            cout << "VALID";

        else
            throw(b);
    }
    catch (int e)
    {
        cout << "INVALID: Exception: 0";
    }
    return 0;
}

Q.76 : Multiple Exception - Default Exception

#include <iostream>
    using namespace std;
int main()
{
    int N;
    cin >> N;
    try
    {
        if (N == 1)
            cout << "Integer Exception\nException number=25";
        else if (N == 2)
            cout << "Float Exception\nException number=25.23";
        else
            throw(N);
    }
    catch (...)
    {
        cout << "Default Exception\nWrong Number Used, Input 1 or 2";
    }
    return 0;
}

Q.77 : User defined Exception - Division

#include <iostream>
#include <exception>
    using namespace std;
class Divide_By_Zero_Exception : public exception
{
public:
    const char *what() const throw()
    {
        return "Divide By Zero Exception";
    }
};
int main()
{

    try
    {
        int a, b;
        cin >> a >> b;
        if (b == 0)
        {
            Divide_By_Zero_Exception d;
            throw d;
        }
        else
        {
            cout << a / b;
        }
    }
    catch (exception &e)
    {
        cout << e.what();
    }
    return 0;
}

Q.78 : Compare two string

#include <iostream>
#include <string.h>
       using namespace std;
int main()
{
    char ch[10], ch1[10];
    cin >> ch >> ch1;
    try
    {
        for (int i = 0; ch[i] > 48 && ch[i] < 57; i++)
            throw ch[i];
        for (int i = 0; ch[i] > 48 && ch1[i] < 57; i++)
            throw ch1[i];
        if (strcmp(ch, ch1) != 0)
            cout << ch << " is not " << ch1;
        else
            cout << ch << " is " << ch1;
    }
    catch (char ch)
    {
        cout << "Invalid input Try again";
    }

    return 0;
}

Q.79 : Relational Operators - Exceptional Handling

#include <iostream>
    using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    try
    {
        if (a > 0 && b > 0)
        {
            if (a > b)
            {
                cout << a << "<" << b << "=0" << endl;
                cout << a << "<=" << b << "=0" << endl;
                cout << a << "=" << b << "=0" << endl;
                cout << a << ">" << b << "=1" << endl;
                cout << a << ">=" << b << "=1" << endl;
                cout << a << "!=" << b << "=1" << endl;
            }
            else if (a < b)
            {
                cout << a << "<" << b << "=1" << endl;
                cout << a << "<=" << b << "=1" << endl;
                cout << a << "=" << b << "=0" << endl;
                cout << a << ">" << b << "=0" << endl;
                cout << a << ">=" << b << "=0" << endl;
                cout << a << "!=" << b << "=1" << endl;
            }
            else
            {
                cout << a << "<" << b << "=0" << endl;
                cout << a << "<=" << b << "=1" << endl;
                cout << a << "=" << b << "=1" << endl;
                cout << a << ">" << b << "=0" << endl;
                cout << a << ">=" << b << "=1" << endl;
                cout << a << "!=" << b << "=0" << endl;
            }
        }
        else
            throw a;
    }
    catch (...)
    {
        cout << "No Negative Numbers";
    }
    return 0;
}

Q.80 : Number Exception

#include <iostream>
       using namespace std;
int main()
{
    float input;
    cin >> input;
    try
    {
        if (!((float(int(input)) == input) && (input != 0)))
            throw("Invalid input");
        cout << "Number of exceptions: " << int(input / 4);
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}