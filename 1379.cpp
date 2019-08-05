#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int a, b;

    cin >> a >> b;
    while (a!=0 && b!=0) {
        if (a > b)
            swap(a, b);
        cout << a - (b - a) << endl;
        cin >> a >> b;
    }

    return 0;
}
