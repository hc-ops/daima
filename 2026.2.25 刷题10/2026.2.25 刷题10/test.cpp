#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, min;
    cin >> a;
    min = a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a < min)
        {
            min = a;
        }
    }
    cout << min << endl;
    return 0;
}