#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    // Precompute factorials up to 20!
    vector<long long> factorials(21, 1);
    for (int i = 1; i <= 20; ++i) {
        factorials[i] = factorials[i - 1] * i;
    }

    while (t--) {
        long long n;
        cin >> n;

        // Find the largest k such that k! divides n
        int k = 0;
        for (int i = 1; i <= 20; ++i) {
            if (n % factorials[i] == 0) {
                k = i;
            } else {
                break;
            }
        }

        cout << k << endl;
    }

    return 0;
}
