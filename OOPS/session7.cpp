Q .61 : Division

#include <iostream>
        using namespace std;
template <class T>
T displayresult(T n1, T n2)
{
    return n1 / n2;
}
int main()
{
    float a, b, c;
    cin >> a >> b;
    c = displayresult(a, b);
    cout << a << endl
         << b << endl
         << c;
    return 0;
}

Q .62 : Largest Number

#include <iostream>
        using namespace std;
template <class T>
T Large(T n1, T n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}
int main()
{
    int x, y;
    float x1, y1;
    cin >> x >> y >> x1 >> y1;
    cout << Large(x, y) << "\n"
         << Large(x1, y1);
    return 0;
}

Q .63 : Adding Numbers

#include <iostream>
        using namespace std;
template <class T>
T displayresult(T n1, T n2)
{
    cout << n1 << endl
         << n2 << endl
         << n1 + n2;
    return 0;
}
int main()
{
    float a, b;
    cin >> a >> b;
    displayresult(a, b);
    return 0;
}

Q .64 : Product of numbers

#include <iostream>
        using namespace std;
template <class T>
T displayresult(T n1, T n2)
{
    cout << n1 << endl
         << n2 << endl
         << n1 * n2;
    return 0;
}
int main()
{
    float a, b;
    cin >> a >> b;
    displayresult(a, b);
    return 0;
}

Q .65 : Sum of Numbers

#include <iostream>
        using namespace std;
template <class T>
T sum(T n1, T n2)
{
    return n1 + n2;
}
int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << sum(a, b) << endl
         << sum(c, d) << endl
         << sum(a, c);
    return 0;
}

Q .66 : Subtraction

#include <iostream>
        using namespace std;
template <class T>
T displayresult(T n1, T n2)
{
    cout << n1 << endl
         << n2 << endl
         << n1 - n2;
    return 0;
}
int main()
{
    float a, b;
    cin >> a >> b;
    displayresult(a, b);
    return 0;
}

Q .67 : Minimum of given elements(Banglore)

#include <iostream>
            using namespace std;
template <class T>
void min(T n1, T n2, T n3)
{
    if (n1 < n2)
    {
        if (n1 < n3)
            cout << n1;
        else
            cout << n3;
    }
    else if (n2 < n3)
        cout << n2;
    else
        cout << n3;
}
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    min(a, b, c);
    return 0;
}

Q .68 : Adding Array

#include <iostream>
        using namespace std;
template <class T>
T sum(T arr[])
{
    T s;
    for (int i = 0; i < 5; i++)
        s = s + arr[i];
    cout << s << endl;
}
int main()
{
    int arr1[5];
    float arr2[5];
    for (int i = 0; i < 5; i++)
        cin >> arr1[i];
    for (int i = 0; i < 5; i++)
        cin >> arr2[i];
    sum(arr1);
    sum(arr2);
    return 0;
}

Q .69 : Largest of Long

#include <iostream>
        using namespace std;
template <class T>
int GetMax(T x, T y, T z)
{
    if (x > y)
    {
        if (x > z)
            cout << x;
        else
            cout << z;
    }
    else if (y > z)
        cout << y;
    else
        cout << z;
    return 0;
}
int main()
{
    long a, b, c;
    cin >> a >> b >> c;
    GetMax(a, b, c);
    return 0;
}

Q .70 : Swap

#include <iostream>
        using namespace std;
template <class T>
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    string x, y;
    cin >> x >> y;
    Swap(x, y);
    cout << x << " " << y;
    return 0;
}
