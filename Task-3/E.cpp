#include <bits/stdc++.h>

using namespace std;

string format(int a, int b) {
    string s = "";
    string num_str = to_string(a);
    for(int i = 0; i < b; i++) {
        s += num_str;
    }
    return s;
}

string compare(string s1, string s2) {
    if (s1 < s2) {
        return s1;
    } else {
        return s2;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;

    string a_str = format(a,b);
    string b_str = format(b,a);

    cout << compare(a_str, b_str) << endl;
}