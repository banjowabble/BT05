#include <bits/stdc++.h>
using namespace std;
void fakeprint(int a, int& b)
{
    cout << a << ' ' << b << '\n'
         << &a << ' ' << &b;
}
int main ()
{
    int m, n; cin >> m >> n;
    cout << &m << ' ' << &n << ' ';
    fakeprint(m, n);
}
// ta thay &m va &a khac nhau, do do tham tri a va doi so m khac nhau
// ta thay &n va &b bang nhau, do do tham bien b va doi so n la mot
