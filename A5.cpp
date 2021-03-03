#include <bits/stdc++.h>
using namespace std;
test(int& x)
{
    cout << &x << '\n';
}
int main ()
{
    int n; cin >> n;
    cout << &n << '\n'; //&n = &x do do bien tham chieu va bien no chieu toi la mot
    test(n);
    //int& m //loi: khong khai bao tham chieu chua chieu toi bien thuong duoc
    //cout << &m << '\n'
    int a = 1, c = 3;
    int&b = a;
    a=a+1;
    cout << b << ' ' << a <<'\n'; // in ra 2 2
    b = c;
    c=c+1;
    cout << b << ' ' << c; //in ra 3 4. Vay tuc la khong the chieu mot tham chieu toi mot bien khac voi dich ban dau cua no
}
