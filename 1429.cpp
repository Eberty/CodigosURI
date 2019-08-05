#include <bits/stdc++.h>

using namespace std;

int main() {
    int fat[10], acm;
    fat[0] = 1;
    for (int i = 1; i < 10; i++)
        fat[i] = fat[i-1] * i;

    while (cin >> acm && acm) {
        int res = 0, i = 1;
        while (acm > 0) {
            res += (acm%10) * fat[i];
            i++;
            acm /= 10;
        }
        cout << res << endl;
    }

    return 0;
}
