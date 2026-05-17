#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
    int a[10001], n;
    for (int i = 1;; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            n = i;
            break;
        }
    }
    for (int i = n - 1; i >= 1; i--)
    {
        cout << a[i] << " ";
    }
    return 0;

}