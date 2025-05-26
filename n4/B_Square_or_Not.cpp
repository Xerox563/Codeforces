#include <bits/stdc++.h>
using namespace std;

bool checkSquarePattern(int strLength, const string &pattern) {
    int matrixSize = sqrt(strLength);
    
    // Check if the string length is a perfect square
    if (matrixSize * matrixSize != strLength) {
        return false;
    }

    // Validate the top and bottom rows of the matrix
    for (int i = 0; i < matrixSize; ++i) {
        if (pattern[i] != '1' || pattern[strLength - matrixSize + i] != '1') {
            return false;
        }
    }

    // Validate the sides and the internal zeros
    for (int row = 1; row < matrixSize - 1; ++row) {
        if (pattern[row * matrixSize] != '1' || pattern[(row + 1) * matrixSize - 1] != '1') {
            return false;
        }
        for (int col = 1; col < matrixSize - 1; ++col) {
            if (pattern[row * matrixSize + col] != '0') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int strLength;
        string pattern;
        cin >> strLength >> pattern;

        if (checkSquarePattern(strLength, pattern)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
