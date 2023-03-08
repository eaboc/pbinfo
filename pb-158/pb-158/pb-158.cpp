#include <iostream>

using namespace std;

int n, p, x, v[25];

int main()
{
    cin >> n >> x >> p;
    
    p--; //The problem requires the index to start at 1 instead of 0
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n  + 1; i++)
    {
        if (n - i > p)
        {
            v[n-i] = v[n-i-1];
        } else if (n - i == p) {
            v[n-i] = x;
        }
    }

    for (int i = 0; i < n + 1; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
