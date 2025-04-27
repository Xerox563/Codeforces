#include <iostream>
using namespace std;

char findMissingCharacter(char square[3][3]) {
    for (int i = 0; i < 3; ++i) {
        int row_count[3] = {0};
        int col_count[3] = {0};
        
        for (int j = 0; j < 3; ++j) {
            if (square[i][j] != '?')
                row_count[square[i][j] - 'A']++;
            if (square[j][i] != '?')
                col_count[square[j][i] - 'A']++;
        }

        for (int k = 0; k < 3; ++k) {
            if (row_count[k] == 0)
                return 'A' + k;
            if (col_count[k] == 0)
                return 'A' + k;
        }
    }
    return '?'; 

int main() {
    int t;
    cin >> t;
    while (t--) {
        char square[3][3];
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cin >> square[i][j];
            }
        }
        
        char missing_char = findMissingCharacter(square);
        cout << missing_char << endl;
    }
    return 0;
}
