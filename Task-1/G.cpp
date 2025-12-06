#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned int k, r;
    cin >> k >> r;
    if(r > 9) cout << "r should be between 1 and 9" << endl;

    for (int i = 1; i < 1000; i++) {
        int totalPrice = k * i;
        int lastNumber = totalPrice % 10;
        if(lastNumber == r || lastNumber == 0) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}