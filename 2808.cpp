#include <bits/stdc++.h>

using namespace std;

const int mov[2][8] = { -2, -2, -1, -1,  1,  1,  2,  2,
                        -1, 1, -2, 2, -2, 2, -1, 1
                        };

int main() {
    bool grid[8][8];
    short oriX, oriY, destX, destY;
    char ori[3], dest[3];

    scanf("%s %s", ori, dest);
    memset(grid, false, sizeof(grid));
    oriX = ori[0] - 'a';
    oriY = ori[1] - '1';
    destX = dest[0] - 'a';
    destY = dest[1] - '1';

    for(int k = 0; k < 8; k++) {
        int i = oriX + mov[0][k];
        int j = oriY + mov[1][k];
        if(0 <= i && i < 8 && 0 <= j && j < 8)
            grid[i][j] = true;
    }

    if (grid[destX][destY])
        printf("VALIDO\n");
    else
        printf("INVALIDO\n");

    return 0;
}
