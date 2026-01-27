#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n-1);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n; cin >> n;
    int fact_of_n = factorial(n);
    cout << fact_of_n << endl;
}