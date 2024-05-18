#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum = 0;
    int num = 1;

    while (num <= 50) {
        if (num % 2 != 0) {
            sum += num;
            if (sum <= 100) {
                cout<<num<<" + sum = " <<sum << endl;
            } else {
                cout << "sum exceeded 100";
                return 0;
            }
        }
        num++;
    }

    return 0;
}