#include <bits/stdc++.h>

using namespace std;

bool isValidSudoku(int board[9][9]) {
    unordered_set<int> has;
    for (int i = 0; i < 9; i ++) {
        has.clear();
        for (int j = 0; j < 9; j ++) {
            if (has.count(board[i][j]))
                return false;
            has.insert(board[i][j]);
        }
        has.clear();
        for (int j = 0; j < 9; j ++) {
            if (has.count(board[j][i]))
                return false;
            has.insert(board[j][i]);
        }
    }

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j ++) {
            has.clear();
            for (int x = i * 3; x < i * 3 + 3; x ++) {
                for (int y = j * 3; y < j * 3 + 3; y ++) {
                    if (has.count(board[x][y]))
                        return false;
                    has.insert(board[x][y]);
                }
            }
        }
    }
    return true;
}

int main() {
    int n, mat[9][9];
    scanf("%d", &n);
    for (int k=0; k<n; k++) {
        for (int i=0; i<9; i++)
            for (int j=0; j<9; j++)
                scanf("%d", &mat[i][j]);

        bool res = isValidSudoku(mat);
        printf("Instancia %d\n", k+1);
        if (res)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
