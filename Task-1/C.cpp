#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) { // equivalent to for(int i = 0; i < t; i++), when t = 0 it stops
        int rating;
        cin >> rating;

        if (rating >= 1900) {
            cout << "Division 1" << endl;
        }
        else if (rating >= 1600) {
            cout << "Division 2" << endl;
        }
        else if (rating >= 1400) {
            cout << "Division 3" << endl;
        }
        else {
            cout << "Division 4" << endl;
        }
    }
    return 0;
}