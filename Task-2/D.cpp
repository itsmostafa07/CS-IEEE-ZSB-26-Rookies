#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    
    while(t--) {
        int n; 
        cin >> n;

        int numbers[n];
        for(int i = 0; i < n; i++) {
            cin >> numbers[i];
        }

        int repeated_value;
        
        if (numbers[0] == numbers[1]) {
            repeated_value = numbers[0];  // numbers[0] and numbers[1] are same, so they are repeated
        }
        else if (numbers[0] == numbers[2]) {
            repeated_value = numbers[0];  // numbers[0] and numbers[2] are same, so that's repeated
        }
        else {
            repeated_value = numbers[1];  // numbers[1] and numbers[2] must be same, so that's repeated
        }
        
        for(int i = 0; i < n; i++) {
            if (numbers[i] != repeated_value) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}
