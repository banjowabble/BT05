#include <bits/stdc++.h>
using namespace std;
bool eq(int a[], int b[], int n)
{
    bool flag = false;
    for (int i=0; i<sizeof(a)/sizeof(int); i++)
        for (int j=0; j<sizeof(b)/sizeof(int); j++)
            if (a[i]==b[j])
            {
                int k=i+1; int l=j+1;
                while (k<n && l<n)
                {
                    if (a[k]==b[l]) flag = true;
                    else {flag = false; break;}
                    k++; l++;
                }
            }
    return flag;
}
int main ()
{
    //test
    int a[5]={1,2,3,5,4};
    int b[6]={0,1,2,3,4,5};
    cout << eq(a, b, 3);
}
