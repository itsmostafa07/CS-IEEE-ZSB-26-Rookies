#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string word; cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    int count[26] = {};
    for(int i = 0; i < n; i++) {
        int index = word[i] - 'a';
        count[index]++; 
    }

    bool isPangram = true;
    for(int i = 0; i < 26; i++) {
        if(count[i] == 0) { // There is a missing letter
            isPangram = false;
            break;
        }
    }

    if(isPangram) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    return 0;
}