#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;
    while(q--) {
        int n; cin >> n;
        string word1, word2; cin >> word1 >> word2;
        int count1[26] = {};
        int count2[26] = {};
        for(int i = 0; i < n; i++) {
            // For First word
            int index1 = word1[i] - 'a';
            count1[index1]++;

            // For Second word
            int index2 = word2[i] - 'a';
            count2[index2]++;
        }
        bool canBeRearranged = true;
        for(int i = 0; i < 26; i++) {
            if(count1[i] != count2[i]) {
                canBeRearranged = false;
                break;
            }
        }
        if(canBeRearranged) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
