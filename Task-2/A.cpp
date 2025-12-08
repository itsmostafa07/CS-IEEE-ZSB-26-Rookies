#include <bits/stdc++.h>

using namespace std;

void solve(int n, string s) {

    bool solved[26] = {}; // set all members are false initially
    int total_balloons = 0;

    for(int i = 0; i < s.length(); i++) {
        int index = s[i] - 'A'; // A = 0, B = 1, C = 2 , ....., Z = 26

        if(solved[index] == false) {
            solved[index] = true;
            total_balloons += 2;
        }
        else total_balloons += 1;
    }
    cout << total_balloons << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n; string s;
        cin >> n;
        cin >> s;
        solve(n,s);
    }
}