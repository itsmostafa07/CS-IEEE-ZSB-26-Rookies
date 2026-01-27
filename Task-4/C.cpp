#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

ll minimumDifference(int index, ll sum1, ll sum2, vll &a) {
    if(index == a.size()) {
        return abs(sum1 - sum2);
    }

    ll diff1 = minimumDifference(index + 1, sum1 + a[index], sum2, a);
    ll diff2 = minimumDifference(index + 1, sum1, sum2 + a[index], a);

    return min(diff1, diff2);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vll numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    ll result = minimumDifference(0, 0, 0, numbers);

    cout << result << endl;

    return 0;
}
