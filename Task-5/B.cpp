#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a = 0;
    int b = 0;
    int c = 0;
    
    // for a
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            a = i;
            n /= i;
            break;
        }
    }

    if (a == 0) {
        cout << "NO\n";
        return;
    }

    // for b
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0 && i != a) {
            b = i;
            n /= i;
            break;
        }
    }

    if (b == 0) {
        cout << "NO\n";
        return; // Stop here!
    }

    // for c
    c = n; // because n is now reiminder of division of n over a and b

    if(c > b) { // beacuse a < b < c
        cout << "YES\n";
        cout << a << " " << b << " " << c << "\n";
    } 
    else cout << "NO\n";
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
