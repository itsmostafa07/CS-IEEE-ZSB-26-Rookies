#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<long long>
using namespace std;

double totalPossible = 0;
double correct = 0;

void recursion(int index, int currPos, int sentPos, vector<char> &received){
    if(index == received.size()){
        totalPossible++;
        if(currPos == sentPos)
            correct++;
        return;
    }

    if(received[index] == '+') recursion(index + 1, currPos + 1, sentPos, received);
    else if(received[index] == '-') recursion(index + 1, currPos - 1, sentPos, received);
    else {
        recursion(index + 1, currPos + 1, sentPos, received); // +
        recursion(index + 1, currPos - 1, sentPos, received); // -
    }
}

double probability(vector<char> &sent, vector<char> &received) {
    int sentPos = 0;
    for(char c : sent) {
        if(c == '+') sentPos++;
        else sentPos--;
    }

    totalPossible = 0;
    correct = 0;

    recursion(0, 0, sentPos, received);

    return correct / totalPossible;
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);

    string commands_sent, commands_received;
    cin >> commands_sent; cin >> commands_received;

    vector<char> sent(commands_sent.size());
    for(int i = 0; i < sent.size(); i++) {
        sent[i] = commands_sent[i];
    }
    vector<char> received(commands_received.size());
    for(int i = 0; i < received.size(); i++) {
        received[i] = commands_received[i];
    }

    cout << fixed << setprecision(12) << probability(sent, received) << endl;

    return 0;
}