#include<bits/stdc++.h>

using namespace std;

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    double fact = 1;
    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
        if (!prime(i)) {
            fact = 1;
            for (int j = 2; j <= i; j++) {
                if (fact > numeric_limits<double>::max() / j) {
                    break;
                }
                fact *= j;
            }
            if (fact <= numeric_limits<double>::max()) {
                cout << "factorial: " << fact << endl;
            }
        } else {
            cout << "skip" << endl;
        }
    }
    return 0;
}
