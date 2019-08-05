#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    while (cin >> str) {
        for (size_t i=0; i<str.size(); i++) {
            size_t j;
            for (j=0; j<i; j++)
                cout << ' ';
            for (j=0; j<str.size()-i-1; j++)
                cout << str[j] << ' ';
            cout << str[j] << endl;
        }
        cout << endl;
    }
    return 0;
}
