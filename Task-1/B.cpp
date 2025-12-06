#include "bits/stdc++.h"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double input;
    cin >> input;

    if (input != (int)input && input <= 0) {
        cout << "Invalid Input: Must be positive" << endl;
        return 0;
    }

    if (input != (int)input && input > 0) {
        cout << "NO" << endl;
        return 0;
    }

    int w = (int)input;
    bool canBeEven = (w % 2 == 0);

    if(w == 2) {
        cout << "NO" << endl;
    }
    else if(canBeEven) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}