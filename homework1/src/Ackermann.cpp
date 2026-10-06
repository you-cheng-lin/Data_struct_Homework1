#include <iostream>
using namespace std;

int Ackermann(int m, int n)
{
    if (m == 0) // when m=0, just n + 1
        return n + 1;

    else if (n == 0) // when m>0 and n=0, reduce m by 1 and set n to 1
        return Ackermann(m - 1, 1);

    else // when m>0 and n>0, first calculate Ackermann(m,n-1), then use the result
        return Ackermann(m - 1, Ackermann(m, n - 1));
}

int main()
{
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    if (m < 0 || n < 0) {
        cout << "Error: m and n must be Natural numbers." << endl;
        return 1;
    }

    cout << Ackermann(m, n) << endl;

    return 0;
}