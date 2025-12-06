#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < 0 || a > 20 || b < 0 || b > 20 || c < 0 || c > 20) {
            cout << "Invalid Input, Numbers must be between 0 and 20" << endl;
        } 
        else {
            if(a == b + c || b == a + c || c == a + b) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}