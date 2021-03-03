#include <bits/stdc++.h>
using namespace std;
int binarySearchLoop(int key, int a[], int low, int high)
{

    while (low <= high)
    {
        int mid = (low+high)/2;
        if (a[mid] == key) return mid;
        else if (a[mid] < key) low = mid+1;
        else high = mid - 1;
    }
    return -1;
}
int binarySearchRecursion(int key, int a[], int low, int high)
{
    if (low>high) return -1;
    int mid = (low+high)/2;
    if (a[mid]==key) return mid;
    else if (a[mid]<key) return binarySearchRecursion(key, a, mid+1, high);
    else return binarySearchRecursion(key, a, low, mid-1);

}
int main ()
{
    int a[5] = {2, 4, 8, 10, 12};
    if (binarySearchLoop(4,  a,  0,  5) > 0) cout << binarySearchLoop(4,  a,  0,  5);
    else cout << "Khong tim thay key";
    cout << '\n';
    if (binarySearchRecursion(4, a, 0, 5) > 0) cout << binarySearchRecursion(4, a, 0, 5);
    else cout << "Khong tim thay key";
}
