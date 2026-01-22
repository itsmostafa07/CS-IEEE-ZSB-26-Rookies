#include <bits/stdc++.h>

using namespace std;

int attacks(int h, int a) {
    return ceil((double)h / a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h,a; // h for health, a for health decrease by one attack
    cin >> h >> a;

    int number_of_attacks = attacks(h,a);
    cout << number_of_attacks << endl;
}