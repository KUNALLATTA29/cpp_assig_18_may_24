#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << j<<" ";
        }
        cout << endl;
    }
    cout<<endl;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 2; j <= i; ++j) {
            cout << j<<" ";
        }
        cout << endl;
    }
    cout<<endl;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 3; j <= i; ++j) {
            cout << j<<" ";
        }
        cout << endl;
    }
    cout<<endl;
    
    for (int i = 1; i <= n; ++i) {
        for (int j = 4; j <= i; ++j) {
            cout << j<<" ";
        }
        cout << endl;
    }

    return 0;
}
