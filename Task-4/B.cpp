#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

void simulation(ll n, vll &array) {
    array.push_back(n);
    if(n == 1) return;
    else if(n % 2 == 0) simulation(n / 2, array);
    else simulation(n * 3 + 1, array);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n; cin >> n;
    vll array;
    simulation(n, array);
    for(long long x : array) {
        cout << x << " ";
    }
}