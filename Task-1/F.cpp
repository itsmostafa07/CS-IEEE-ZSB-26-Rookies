#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    if(t < 1) cout << "Invalid Input, Enter a Positive Number" << endl;

    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}