#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; // Problems
    cin >> n;

    int petyaOpinion, vasyaOpinion, tonyaOpinion, count = 0;
    for(int i = 0; i < n; i++) {
        cin >> petyaOpinion >> vasyaOpinion >> tonyaOpinion;
        if ( (petyaOpinion < 0 || petyaOpinion > 1) || 
             (vasyaOpinion < 0 || vasyaOpinion > 1) || 
             (tonyaOpinion < 0 || tonyaOpinion > 1) ) 
        {
            cout << "Enter Only 0 and 1" << endl;
            return 0;
        }

        int sum = petyaOpinion + vasyaOpinion + tonyaOpinion;
        if(sum >= 2) count++;
    }
    cout << count << endl;
}