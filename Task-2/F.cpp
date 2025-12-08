#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int matrix[5][5];
    int rowOf1, columnOf1, centerRow = 2, centerColumn = 2;
    for(int row = 0; row < 5; row++) {
        for(int column = 0; column < 5; column++) {
            cin >> matrix[row][column];
            if(matrix[row][column] == 1) {
                rowOf1 = row;
                columnOf1 = column;
            }
        }
    }
    int minimumSteps = abs(centerRow - rowOf1) + abs(centerColumn - columnOf1);
    cout << minimumSteps << endl;
}
