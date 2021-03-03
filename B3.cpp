#include <bits/stdc++.h>
using namespace std;
void cube(int i)
{
    i = i * i * i;
}

int main ()
{
    for (int i = 0; i < 1000; i++)
    {
        cube(i);
	    cout << i << ' ';
    }
}
//ham cube dc chay 1000 lan nhung cung khong lam gia tri bien i thay doi do no dc truyen vao bang gia tri
