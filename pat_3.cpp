#include <bits/stdc++.h>

using namespace std;

int main() {
    int k = 4;

    for (int i = k; i >= 1; --i) {
        for (int j = k; j >= i; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
