#include <bits/stdc++.h>
using namespace std;
print(int arr[], string str)
{
    cout << &arr << ' ' << &str;
}
int main ()
{
    int a[] = {1, 2, 3};
    string s = "abc";
    cout << &a << ' ' << &s << endl;
    print(a, s);
}
//mang va c++ string duoc truyen vao ham theo co che pass-by-value do dia chi cua doi so va tham so la khac nhau
