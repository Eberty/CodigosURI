#include <bits/stdc++.h>

using namespace std;

int main() {
    char mat[105][105], c;
    int n, m, s;
    while (scanf("%d %d %d", &n, &m, &s) && n && m && s) {
        int posi = 0, posj = 0, res = 0;
        char ori;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin >> mat[i][j];
                if (mat[i][j] == 'N' || mat[i][j] == 'S' || mat[i][j] == 'L' || mat[i][j] == 'O') {
                    posi = i;
                    posj = j;
                    ori = mat[i][j];
                }
            }
        }
        for (int i=0; i<s; i++) {
            cin >> c;
            if (c == 'D') {
                if (ori == 'N')
                    ori = 'L';
                else if (ori == 'L')
                    ori = 'S';
                else if (ori == 'S')
                    ori = 'O';
                else if (ori == 'O')
                    ori = 'N';
            } else if (c == 'E') {
                if (ori == 'N')
                    ori = 'O';
                else if (ori == 'O')
                    ori = 'S';
                else if (ori == 'S')
                    ori = 'L';
                else if (ori == 'L')
                    ori = 'N';
            } else if (c == 'F') {
                int nexti = posi - (ori == 'N') + (ori == 'S');
                int nextj = posj - (ori == 'O') + (ori == 'L');
                if (nexti >= 0 && nexti < n && nextj >= 0 && nextj < m && mat[nexti][nextj] != '#') {
                    posi = nexti;
                    posj = nextj;
                }
            }
            if (mat[posi][posj] == '*') {
                mat[posi][posj] = '.';
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
