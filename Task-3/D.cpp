#include <bits/stdc++.h>

using namespace std;

int numberOfDigits(int n, int k) { // the goal is to calculate how many digits will n be in binary, to calculate this we / by k in a for loop till n = 0
    int digits = 0;
    while(n > 0) {
        n /= k;
        digits++;
    }
    return digits;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; // n number, k base
    cin >> n >> k;
    int digits = numberOfDigits(n,k);
    cout << digits << endl;
}