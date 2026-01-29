#include <bits/stdc++.h>
#include <numeric>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

// we want to get the 2 numbers that are multiple to x and have least gcd and print both numbers

void solve(ll x) {
    for(int i = sqrt(x); i >= 1; i--) {
        if(x % i == 0) {
            ll a = i;
            ll b = x / i;

            // to check if they have common factor
            if(gcd(a,b) == 1) {
                cout << a << " " << b << endl;
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    ll x;
    cin >> x;
    solve(x);
}
