#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    if(t < 1 || t > 26) cout << "Enter a number between 1 and 26" << endl;

    string word = "codeforces";
    while(t--) {
        char letter;
        cin >> letter;
        if(int(letter) > 64 && int(letter) < 91) {
            letter = char(int(letter) + 32);
        }

        bool letterFound = false;

        for(int i = 0; i < word.size(); i++) {
            if (letter == word[i]) {
                letterFound = true;
                break;
            }
        }
        if(letterFound) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}