//Q. 1: SER7

#include "stdio.h"
#include "string.h"
int main()
{
    int n, i, j, l, p, c1, c2;
    char s[200];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", s);
        c1 = 0;
        c2 = 0;
        l = strlen(s) - 4;
        for (j = 0; j <= l; j++)
        {
            if (s[j] == 'S' && s[j + 1] == 'U' && s[j + 2] == 'V' && s[j + 3] == 'O')
            {
                c1 = c1 + 1;
            }
        }
        p = strlen(s) - 7;
        for (j = 0; j <= p; j++)
        {
            if (s[j] == 'S' && s[j + 1] == 'U' && s[j + 2] == 'V' && s[j + 3] == 'O' && s[j + 4] == 'J' && s[j + 5] == 'I' && s[j + 6] == 'T')
            {
                c2 = c2 + 1;
            }
        }
        printf("SUVO = %d, SUVOJIT = %d\n", c1 - c2, c2);
    }
    return 0;
}

//Q. 2: SER8

#include <iostream>
using namespace std;

int main()
{
    int t, a, temp, f = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;
        f = 0;
        temp = a;
        while (a)
        {

            if (a % 100 == 21)
            {
                cout << "The streak is broken!" << endl;
                f = 1;
                break;
            }
            a = a / 10;
        }
        if (f == 1)
            continue;
        if (temp % 21 == 0)
        {
            cout << "The streak is broken!" << endl;
        }

        else
            cout << "The streak lives still in our heart!" << endl;
    }
    return 0;
}

//Q. 3: SER13

#include <iostream>
using namespace std;
int main()
{

    int n, *a, *b;
    cin >> n;

    a = new int[n];
    b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    //if(b[0]<a[n-1]){
    //  cout << "0";
    //}

    int max = 0, m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (b[j] >= a[i])
            {
                m = j - i;
                max = (max < m ? m : max);
            }
        }
    }

    cout << max;

    return 0;
}

// Q. 4: SER9

#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll element(long A[], long n, long k)
{

    long right = 0, left = 0, count = 0;

    map<long, long> m;

    while (right < n)
    {

        m[A[right]]++;

        while (m.size() > k)
        {

            m[A[left]] = m[A[left]] - 1;

            if (m[A[left]] == 0)
            {

                m.erase(A[left]);
            }

            left++;
        }

        count += right - left + 1;

        right++;
    }

    return count;
}

ll result(long A[], long n, long k)
{

    return (element(A, n, k) - element(A, n, k - 1));
}

int main()
{

    ios_base::sync_with_stdio(0);

    cin.tie(0);

    long n;
    cin >> n;

    long A[n];

    set<long> set;

    for (int i = 0; i < n; i++)
    {

        cin >> A[i];

        set.insert(A[i]);
    }

    long k = set.size();

    cout << result(A, n, k) << endl;

    return 0;
}

// Q. 5: SER5

#include <stdio.h>
void thirdLargest(int arr[], int arr_size)
{
    int t, j, i, b;
    for (i = arr_size - 1; i >= 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    for (i = 0; i < arr_size; i++)
        b = arr[arr_size - 3];
    printf("The third Largest element is %d", b);
}

int main()
{
    int a[20], n, i;
    scanf("%d\n", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    thirdLargest(a, n);

    return 0;
}

//Q. 6: SER12

#include <stdio.h>
int main()
{
    int n, m, k, x, y, i, j, ans, flag = 1;
    scanf("%d %d %d", &n, &m, &k);
    int a[100001] = {0}, b[100001] = {0};
    ans = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (a[x] < k)
        {
            ans++;
            a[x]++;
        }
        else if (flag != 0)
        {
            y = x;
            x++;
            if (b[y] != 0)
                x = b[y];
            flag = 0;
            while (x != y)
            {
                if (x == m + 1)
                    x = 1;
                if (x == y)
                    break;
                if (a[x] < k)
                {
                    a[x]++;
                    flag = 1;
                    b[y] = x;
                    break;
                }
                x++;
            }
        }
    }
    printf("%d", n - ans);
    return 0;
}

//Q. 7: SER11

#include "stdio.h"
int main()
{
    int query, i, time, K, number;
    long long int weight, temp, sum = 0;
    scanf("%d", &query);
    for (i = 0; i < query; i++)
    {
        scanf("%d%lld%d", &number, &weight, &time);
        if (number == 1)
        {
            sum += weight;
        }
        if (number == 2)
        {
            printf("%lld\n", sum);
            sum = 0;
        }
        number--;
    }
    return 0;
}

//Q. 8: SER2

#include <bits/stdc++.h>
using namespace std;

void findTriplets(int arr[], int n)
{
    bool found = true;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] << endl;
                    found = true;
                }
            }
        }
    }

    if (found == false)
        cout << " not exist " << endl;
}

int main()
{
    int arr[10];
    int i;
    for (i = 0; i < 5; i++)
        cin >> arr[i];

    findTriplets(arr, 5);
    return 0;
}

//Q. 9: SER6

#include <iostream>
using namespace std;

void findClosest(int A[], int B[], int C[], int p, int q, int r)
{

    int diff = 1000;

    int res_i = 0, res_j = 0, res_k = 0;

    int i = 0, j = 0, k = 0;
    while (i < p && j < q && k < r)
    {

        int minimum = min(A[i], min(B[j], C[k]));
        int maximum = max(A[i], max(B[j], C[k]));

        if (maximum - minimum < diff)
        {
            res_i = i, res_j = j, res_k = k;
            diff = maximum - minimum;
        }

        if (diff == 0)
            break;

        if (A[i] == minimum)
            i++;
        else if (B[j] == minimum)
            j++;
        else
            k++;
    }

    cout << A[res_i] << " " << B[res_j] << " " << C[res_k];
}

int main()
{
    int A[10];
    int B[10];
    int C[10];

    int p;
    int q;
    int r, i;
    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &q);

    for (i = 0; i < q; i++)
    {
        scanf("%d", &B[i]);
    }
    scanf("%d", &r);

    for (i = 0; i < r; i++)
    {
        scanf("%d", &C[i]);
    }

    findClosest(A, B, C, p, q, r);
    return 0;
}

//Q. 10: SER15

#include <stdio.h>
#include <math.h>

int main()
{
    long int n, i, x, root, val, flag = 0;
    scanf("%ld", &n);
    for (i = 1; i <= 100000; i++)
    {
        val = (i * (i + 1)) / 2;
        if (val > n / 2)
            break;
        x = (n - val) * 2;
        root = sqrt(x);
        if (x == (root * (root + 1)))
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
