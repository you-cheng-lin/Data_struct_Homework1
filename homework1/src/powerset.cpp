#include <iostream>
using namespace std;

void powerset(char S[], int n, int index, char current[], int size)
{
    if (index == n)
    {
        cout << "{ ";

        for (int i = 0; i < size; i++)
            cout << current[i] << " ";

        cout << "}" << endl;
        return;
    }

    // do not select S[index]
    powerset(S, n, index + 1, current, size);

    // select S[index]
    current[size] = S[index];
    powerset(S, n, index + 1, current, size + 1);
}

int main()
{
    char S[] = {'a', 'b', 'c'};
    char current[3];

    powerset(S, 3, 0, current, 0);

    return 0;
}