#include <iostream>
using namespace std;

int a(int m, int n)
{
    int x[10000];
    int top = 0;

    x[top++] = m; //stack push m 

    while (top >= 0)
    {
        m = x[top--]; //stack pop m

        if (m == 0)
            n++;
        else if (n == 0)
        {
            n = 1;
            x[top++] = m - 1; //stack push m - 1
        }
        else
        {
            n--; 
            x[top++] = m - 1; //stack push m - 1
            x[top++] = m; //stack push m
        }
    }

    return n;
}

int main()
{
    int m, n;

    cin >> m >> n;

    cout << a(m, n) << endl;

    return 0;
}