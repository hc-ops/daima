#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int fib(int n) {
        // vector<int>f(n+1);
        // f[0]=0;
        // f[1]=1;
        // for(int i=2;i<=n;i++)
        // {
        //     f[i]=f[i-1]+f[i-2];
        // }
        // return f[n];
        if (n == 0)
        {
            return 0;
        }
        int f0 = 0;
        int f1 = 1;
        for (int i = 2; i <= n; i++)
        {
            int new_f = f0 + f1;
            f0 = f1;
            f1 = new_f;
        }
        return f1;
    }
};