#include <bits/stdc++.h>  
using namespace std;
#define endl "\n"

string pad(string s, int l)
{
  if (s.length() != l)
  {
    for (int x=s.length(); x < l; x++)
      s = "0" + s;
  }
  return s;
}

string add(string a, string b)
{
  if (a.length() > b.length())
  {
   a = "0" + a;
   b = pad (b, a.length()); 
  }
  else 
  {
    b ="0"+b;
    a = pad(a, b.length());
  }
  
  int temp=0;
  string sum = "";
  
  for (int x=a.length()-1; x > -1; x--)
  {
    temp += (a[x]-'0') + (b[x]-'0');
    if (temp >= 10)
    {
      temp -= 10;
      char aChar = '0' + temp;
      sum = aChar + sum;
      temp = 1;
    }
    else 
    {
      char aChar = '0' + temp;
      sum = aChar + sum;
      temp = 0;
    }
  }
  while (sum[0] == '0')
    sum = sum.substr(1);
  return sum;
}

string sub(string a, string b)
{
  if (a.length() > b.length())
  {
   a = "0" + a;
   b = pad (b, a.length()); 
  }
  else 
  {
    b ="0"+b;
    a = pad(a, b.length());
  }
  
  int temp=0;
  string sum = "";
  if (a > b)
  {
      for (int x=a.length()-1; x > -1; x--)
      {
        temp = (a[x]-'0') - (b[x]-'0')-temp;
        if (temp < 0)
        {
          temp += 10;
          char aChar = '0' + temp;
          sum = aChar + sum;
          temp = 1;
        }
        else 
        {
          char aChar = '0' + temp;
          sum = aChar + sum;
          temp = 0;
        }
      }
      while (sum[0] == '0')
        sum = sum.substr(1);
      return sum;
  }
  else if (a==b)
    return "0";
  else 
  {
    for (int x=a.length()-1; x > -1; x--)
    {
        temp = (b[x]-'0') - (a[x]-'0')-temp;
        if (temp < 0)
        {
          temp += 10;
          char aChar = '0' + temp;
          sum = aChar + sum;
          temp = 1;
        }
        else 
        {
          char aChar = '0' + temp;
          sum = aChar + sum;
          temp = 0;
        }
      }
      while (sum[0] == '0')
        sum = sum.substr(1);
      return '-' + sum;  
  } 
}
int main()
{
  cin.sync_with_stdio(0);
  cin.tie(0);
  
    int N;
    vector <string> aa;
  cin >> N;
  for (int x=0; x < N; x++)
  {
    string a, b;
		cin >> a;
    cin >> b;
    if (a[0] == '-' && b[0] == '-')
      aa.push_back("-" + add(a.substr(1), b.substr(1)));
    else if (a[0] != '-' && b[0] == '-')
      aa.push_back(sub (a, b.substr(1)));
    else if (a[0] == '-' && b[0] != '-')
      aa.push_back(sub (b, a.substr(1)));
    else
      aa.push_back(add(a, b));
  }
  for (int x=0; x < N; x++)
    cout << aa[x] << endl;
}