#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        swap(a, b);
    }
    if (b > c)
    {
        swap(b, c);
    }
    if (a > c)
    {
        swap(a, c);
    }
    if (a + b <= c)
    {
        cout << "Not triangle";
        return 0;
    }
    if ((a * a + b * b) == (c * c))
    {
        cout << "Right triangle" << endl;
    }
    else if ((a * a + b * b) > (c * c))
    {
        cout << "Acute triangle" << endl;
    }
    else
    {
        cout << "Obtuse triangle" << endl;
    }
    if (a == b || b == c || c == a)
    {
        cout << "Isosceles triangle" << endl;
    }
    if (a == b && b == c)
    {
        cout << "Equilateral triangle";
    }
    return 0;
}