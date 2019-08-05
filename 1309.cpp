#include <bits/stdc++.h>

using namespace std;

void printfcomma (int n) {
    if (n < 1000) {
        printf ("%d", n);
        return;
    }
    printfcomma (n/1000);
    printf (",%03d", n%1000);
}

int main() {
    int dolares, centavos;
    while (cin >> dolares) {
        cin >> centavos;
        printf ("$");
        printfcomma(dolares);
        printf (".%02d\n", centavos);
    }
    return 0;
}
