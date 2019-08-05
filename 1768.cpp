#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n%2 == 0)
            continue;
        for (int i = 1; i <= n; i += 2)
            printf ("%*s\n", n-(n-i)/2, string(i,'*').c_str());
        printf ("%*c\n", n-(n-1)/2, '*');
        printf ("%*s\n\n", n-(n-3)/2, string(3,'*').c_str());
    }
    return 0;
}
