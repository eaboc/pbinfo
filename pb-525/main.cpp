#include <iostream>

using namespace std;

int n, x, j, v[999], f[2], l = 0;

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v[x] = 1;
    }
    
    for(int i = 0; i < 999; i++) {
        j = 999 - i;
        if(v[j] == 0 && l < 2) {
            f[l] = j;
            l++;
        }
    }
    
    if(f[0] == 0 || f[1] == 0) {
        cout << "NU EXISTA";
        return 0;
    } 

    for(int i = 0; i < 2; i++) {
        j = 1 - i;    
        
        cout << f[j] << " ";
    }

    return 0;
}