#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    while (n--) {
        cin >> c;
        if (c > 8000)
            cout << "Mais de 8000!" << endl;
        else
            cout << "Inseto!" << endl;
    }
    return 0;
}
