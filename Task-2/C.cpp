#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    while(n--) {
        string s; cin >> s; // Word
        if(s.length() > 10) {
            int middle = s.length() - 2; // if word length is 10, then middle will be 10 - 2 = 8
            cout << s[0] << middle << s[s.length() - 1] << endl;
        }
        else cout << s << endl;
    }
}