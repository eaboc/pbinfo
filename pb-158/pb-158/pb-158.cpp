#include <iostream>

using namespace std;

int n, p, x, v[25];

int main()
{
    cin >> n >> x >> p;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (n - i >= p)
        {
            v[n-i] = v[n-i-1];
        } else if (n - i == p - 1) {
            v[n-i] = x;
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
