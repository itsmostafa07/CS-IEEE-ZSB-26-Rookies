#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    bool all_uppercase = true;
    bool all_uppercase_except_first = true;

    for (int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') { // if lowercase
            all_uppercase = false;
            break;
        }
    }

    for (int i = 1;i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') { // if lowercase
            all_uppercase_except_first = false;
            break;
        }
    }

    if (all_uppercase || all_uppercase_except_first) {
        for (int i = 0; i < s.length(); i++) {
            if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            else s[i] -= 32;
        }
    }

    cout << s << endl;
}
