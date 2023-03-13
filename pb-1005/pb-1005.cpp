#include <iostream>
#include <climits>
#include <fstream>

using namespace std;

int x, v[10000];

int main() {
    ifstream f("numere8.in");
    ofstream g("numere8.out");
    
    while(f>>x) {
        v[x] = 1;
    }
    
    for(int i = 0; i < 9999; i++) {
        if(v[9999-i] != 1) {
          g << 9999 - i << " ";
        }
    }

    return 0;
}