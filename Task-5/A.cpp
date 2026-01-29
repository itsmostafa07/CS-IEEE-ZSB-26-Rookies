#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

int numberOfDivisors(int x) {
    int divisors = 0;
    for(int i = 1; i * i <= x; i++) {
        if(x % i == 0) {
            if(i * i == x) divisors++;
            else divisors += 2;
        }
    }
    return divisors;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        cout << numberOfDivisors(x) << "\n";
    }
}
