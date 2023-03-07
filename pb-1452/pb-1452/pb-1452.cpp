#include <iostream>

using namespace std;

int n, p, x[1500];

int main()
{
    cin >> n >> p;

    for (int i = 0; i < n; i++)
    {
        if (i < p)
        {
            cin >> x[i];
        }
        else {
            cin >> x[i-1];
        }
    }

    for (int i = 0; i < n-1; i++)
    {
        cout << x[i] << " ";
    }
    
    return 0;
}
