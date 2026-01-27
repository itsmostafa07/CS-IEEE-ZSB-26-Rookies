#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

set<string> words;

void solve(int index, string s) {
    if(index == s.size()) {
    words.insert(s);
    return;
    }
    
    for(int i = index; i < s.length(); i++) {
        swap(s[index], s[i]);
        solve(index + 1, s);
        swap(s[index], s[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    string s;
    cin >> s;

    solve(0, s);

    cout << words.size() << endl;

    for (string str : words) {
        cout << str << endl;
    }

    return 0;
}