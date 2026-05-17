#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num > 0)
        {
            if (num % 10 == x) {
                count++;
            }
            num /= 10;
        }
    }
    cout << count << endl;
    return 0;
}