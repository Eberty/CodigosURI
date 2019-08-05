#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, num, caso = 1;
    char c, e;

    while(scanf("%d",&n) != EOF) {
        if(caso != 1)
            printf("\n");

        int igual = 0, f = 0, m = 0;
        while(scanf("%d %c%c", &num, &c, &e) == 3) {
            if(num == n) {
                if (c == 'F')
                    f++;
                else
                    m++;
                igual++;
            }
            if (e == '\n')
                break;
        }
        printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n", caso, igual, f, m);
        caso++;
    }
    return 0;
}
