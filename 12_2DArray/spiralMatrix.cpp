#include <iostream>
using namespace std;

void spiralMatrix(int arr[][4], int n) {
    int sRow = 0, eRow = n - 1;
    int sCol = 0, eCol = m - 1;

    while (sRow <= eRow && sCol <= eCol) {
        // top row
        for (int j = sCol; j <= eCol; j++) {
            cout << arr[sRow][j] << " ";
        }

        // right column
        for (int i = sRow + 1; i <= eRow; i++) {
            cout << arr[i][eCol] << " ";
        }

        // bottom row (only if there’s more than one row remaining)
        if (sRow < eRow) {
            for (int j = eCol - 1; j >= sCol; j--) {
                cout << arr[eRow][j] << " ";
            }
        }

        // left column (only if there’s more than one column remaining)
        if (sCol < eCol) {
            for (int i = eRow - 1; i > sRow; i--) {
                cout << arr[i][sCol] << " ";
            }
        }

        sRow++;
        sCol++;
        eRow--;
        eCol--;
    }

    cout << endl;
}

int main() {
    int arr[3][4] = {
        { 1,  2,  3,  4 },
        { 5,  6,  7,  8 },
        { 9, 10, 11, 12 }
    };

    spiralMatrix(arr, 3, 4);

    return 0;
}
