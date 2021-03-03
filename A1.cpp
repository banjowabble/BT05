#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int i=0; cout << &i << '\n';
    int n=5; cout << &n << '\n';
    char g='g'; cout << (void*)&g << '\n';
    char c='d'; cout << (void*)&c << '\n';
    int a[3]={1,2,3};
    char b[3]={'a','b','c'};
    int k=6; cout << &k << '\n';
    int l=7; cout << &l << '\n';
    char m='m'; cout << (void*)&m << '\n';
    char o='o'; cout << (void*)&o << '\n';
    for (int i=0; i<3; i++) cout << &a[i]<< ' ';
    cout << '\n';
    for (int i=0; i<3; i++) cout << (void*)&b[i] << ' ';

}
//dia chi cac bien trong mang int cach nhau 4 byte, trong mang char cach nhau 1 byte
//dia chi cac bien khai bao ca truoc va sau mang deu co dia chi giam dan
