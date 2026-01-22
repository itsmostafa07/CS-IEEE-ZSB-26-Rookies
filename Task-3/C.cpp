#include <bits/stdc++.h>

using namespace std;

double newBalance(int x, double y) {
    if(x % 5 == 0 && (x + 0.50) <= y) return y - x - 0.50;
    else return y;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x; // x for money wanted
    double y; // y for initial balance

    cin >> x >> y;

    double new_balance = newBalance(x,y);
    cout << fixed << setprecision(2) << new_balance << endl;
}