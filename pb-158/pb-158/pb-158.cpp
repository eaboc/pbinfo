#include <iostream>

using namespace std;

int n, p, x, v[25];

int main()
{
    cin >> n >> p >> x;

    for (int i = 0; i < n; i++)
    {
        if (i > p-1)
        {
            cin >> v[n-i];
        } else if (i == p-1) {
            v[n - i] = x;
        }
        else {
            cin >> v[n];
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
