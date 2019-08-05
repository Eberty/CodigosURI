#include <bits/stdc++.h>

using namespace std;

int main() {
    char a1, a2, a3, a4, a5, a6, a7, a8, a9, b1, b2;
    while(scanf("%c%c%c.%c%c%c.%c%c%c-%c%c\n", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &b1, &b2) == 11) {
        int x1 = (a1-'0');
        x1 += (a2-'0')*2;
        x1 += (a3-'0')*3;
        x1 += (a4-'0')*4;
        x1 += (a5-'0')*5;
        x1 += (a6-'0')*6;
        x1 += (a7-'0')*7;
        x1 += (a8-'0')*8;
        x1 += (a9-'0')*9;
        x1 %= 11;
        if (x1 == 10) x1 = 0;
        int x2 = (a1-'0')*9;
        x2 += (a2-'0')*8;
        x2 += (a3-'0')*7;
        x2 += (a4-'0')*6;
        x2 += (a5-'0')*5;
        x2 += (a6-'0')*4;
        x2 += (a7-'0')*3;
        x2 += (a8-'0')*2;
        x2 += (a9-'0');
        x2 %= 11;
        if (x2 == 10) x2 = 0;
        
        if ((x1 == b1-'0') && (x2 == b2-'0'))
            printf("CPF valido\n");
        else
            printf("CPF invalido\n");

    }
    return 0;
}
