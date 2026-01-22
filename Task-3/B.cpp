#include <bits/stdc++.h>

using namespace std;

void restore(int k, vector<int>& a) {
    for(int i = 1; i < a.size(); i+=2) {
        if(k == 0) break;

        int current = a[i];
        int left = a[i-1];
        int right = a[i+1];

        if(current - 1 > left && current - 1 > right) {
            a[i]--;
            k--;
        } 
    }
}

void solve() {
    int n, k; // n for number of mountain peaks, k for number of peaks we need to fix
    cin >> n >> k;
    
    int size = 2 * n + 1;
    vector<int> a(size);
    for(int i = 0; i < size; i++) {
        cin >> a[i];
    }

    restore(k ,a);
    for(int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}