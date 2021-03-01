// Q. 1: Scientist Game

#include <iostream>
using namespace std;
int main()
{
  int origNum, num, rem, sum = 0;
  cin >> origNum;
  num = origNum;
  while (num != 0)
  {
    rem = num % 10;
    sum += rem * rem * rem;
    num /= 10;
  }
  if (sum == origNum)
    cout << "Give to Scientist Armstrong";
  else
    cout << "Dont Give to Scientist Armstrong";
  return 0;
}

// Q. 2: Digits in Words

#include <iostream>
using namespace std;
int main()
{
  long int n, sum = 0, r;

  cin >> n;
  while (n > 0)
  {
    r = n % 10;
    sum = sum * 10 + r;
    n = n / 10;
  }
  n = sum;
  while (n > 0)
  {
    r = n % 10;
    switch (r)
    {
    case 1:
      cout << "One ";
      break;
    case 2:
      cout << "Two ";
      break;
    case 3:
      cout << "Three ";
      break;
    case 4:
      cout << "Four ";
      break;
    case 5:
      cout << "Five ";
      break;
    case 6:
      cout << "Six ";
      break;
    case 7:
      cout << "Seven ";
      break;
    case 8:
      cout << "Eight ";
      break;
    case 9:
      cout << "Nine ";
      break;
    case 0:
      cout << "Zero ";
      break;
    default:
      cout << "tttt ";
      break;
    }
    n = n / 10;
  }

  return 0;
}

// Q. 3: Waiting or Not Waiting

#include <iostream>
using namespace std;
int main()
{
  int a;
  cin >> a;
  if (a > 0)
    cout << "I am waiting";
  else if (a < 0)
    cout << "I am not waiting";
  else
    cout << "Sorry";
  return 0;
}

// Q. 4: Swim

#include <iostream>
using namespace std;
int main()
{
  int a, b, c, s;
  cin >> a >> b;
  c = 3.14 * a * a;
  s = b * b;
  if (c > s)
    cout << "I prefer centre 1";
  else
    cout << "I prefer centre 2";
  return 0;
}

// Q. 5: Letter Pattern

#include <iostream>
using namespace std;
int main()
{

  int i, j, n;
  char ch = 'A';
  cin >> n;
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= i; j++)
    {
      if (ch < 'Z' + 1)
        cout << ch++;
      else
      {
        ch = 'A';
        cout << ch++;
      }
    }
    cout << endl;
  }
  return 0;
}

// Q. 6: Dhoni and Ziva in Chennai

#include <iostream>
using namespace std;
int main()
{
  float a;
  int b;
  cin >> b;
  a = (16.6 * b) / 100;
  cout << "Your weight on moon is : " << a;
  return 0;
}

// Q. 7: Professor Omkar

#include <iostream>
using namespace std;
int main()
{
  int a, b, c;
  float d;
  cin >> a >> b >> c;
  d = (a * (c - b)) * 4184;
  cout << "The energy needed is " << d;
  return 0;
}

// Q. 8: Legends of Indian Cricket

#include <iostream>
using namespace std;
void expand(int);
int main()
{
  int num;

  cin >> num;
  expand(num);
}
void expand(int value)
{
  const char *const ones[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven",
                                "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                                "eighteen", "nineteen"};
  const char *const tens[10] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy",
                                "eighty", "ninety"};

  if (value < 0)
  {
    cout << "minus ";
    expand(-value);
  }
  else if (value >= 1000)
  {
    expand(value / 1000);
    cout << " thousand";
    if (value % 1000)
    {
      if (value % 1000 < 100)
      {
        cout << " and";
      }
      cout << " ";
      expand(value % 1000);
    }
  }
  else if (value >= 100)
  {
    expand(value / 100);
    cout << " hundred";
    if (value % 100)
    {
      cout << " and ";
      expand(value % 100);
    }
  }
  else if (value >= 20)
  {
    cout << tens[value / 10];
    if (value % 10)
    {
      cout << " ";
      expand(value % 10);
    }
  }
  else
  {
    cout << ones[value];
  }
  return;
}

// Q. 9: Sachin and his Pills

#include <iostream>
using namespace std;
class Month
{
  int days;

public:
  Month(int, int);
  bool leapYear(int);
  int getDays();
};
Month::Month(int number, int year)
{
  if (number < 8)
    (number % 2 == 1) ? (days = 31) : (days = 30);
  else
    (number % 2 == 0) ? (days = 31) : (days = 30);
  if (number == 2)
  {
    if (leapYear(year) == 1)
      days = 29;
    else
      days = 28;
  }
}
bool Month::leapYear(int year)
{
  if (year % 400 == 0)
    return 1;
  if (year % 100 == 0)
    return 0;
  if (year % 4 == 0)
    return 1;
  return 0;
}
int Month::getDays()
{
  return days;
}
int pillDays(int day, int month, int year, int count = 0)
{
  Month M(month, year);
  int monthDays = M.getDays(), i;
  for (i = day; i <= monthDays; i++)
    if (i % 2 == 1)
      count++;
  if (monthDays % 2 == 0)
  {
    pillDays(1, month + 1, (month == 12) ? (year + 1) : (year), count);
  }
  else
    return count;
}
int main()
{
  int i, j, n, day, month, year, date[10];
  char temp[10];
  //char date[10];
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> temp;
    for (j = 0; j < 10; j++)
      date[j] = temp[j] - 48;
    day = date[8] * 10 + date[9];
    month = date[5] * 10 + date[6];
    year = date[0] * 1000 + date[1] * 100 + date[2] * 10 + date[3];
    cout << pillDays(day, month, year) << endl;
  }
  return 0;
}

// Q. 10: SRM Calculator

#include <iostream>
using namespace std;
int main()
{
  int op, b, c;
  cin >> op;
  cin >> b >> c;
  switch (op)
  {
  case 1:
    cout << b + c;
    break;
  case 2:
    cout << b - c;
    break;
  case 3:
    cout << b * c;
    break;
  case 4:
    cout << b / c;
    break;
    break;
  default:
    cout << "Invalid Input";
    break;
  }
  return 0;
}