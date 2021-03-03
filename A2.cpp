#include <iostream>
using namespace std;
int factorial(int x)
{
    cout << "x = " << x << " at " << &x << endl;
    if (x>1) return (x*factorial(x-1));
    else return 1;
}
int main ()
{
    int n; cin >> n;
    cout << factorial(n);
}
//kich thuoc cho mot stack frame cho ham factorial la 30 byte.
