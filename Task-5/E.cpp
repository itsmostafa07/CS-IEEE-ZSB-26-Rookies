#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

void solve() {
    ll n; cin >> n;
    if (n % 2 != 0) {
        cout << 0 << endl;
        return;
    }
    cout << (n / 4) + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        solve();
    }
}
