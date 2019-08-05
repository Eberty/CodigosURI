#include <bits/stdc++.h>

using namespace std;

int main() {
    int p;
    string str;

    while (cin >> str) {
        cin >> p;
        int ciclos = 0;
        for (size_t i=0; i < str.size(); i++) {
            if (str[i] == 'R') {
                size_t j, aux = i;
                for (j=i+1; j < str.size() && j < aux+p; j++) {
                    if (str[j] == 'R')
                        i++;
                    else
                        break;
                }
            }
            ciclos++;
        }
        cout << ciclos << endl;
    }

    return 0;
}
