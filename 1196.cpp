#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char, char> teclado;
    string str;
    string errado("1234567890-=WERTYUIOP[]\\SDFGHJKL;\'XCVBNM,./ ");
    string correto("`1234567890-QWERTYUIOP[]ASDFGHJKL;ZXCVBNM,. ");

    for (size_t i=0; i< errado.size(); i++)
        teclado[errado[i]] = correto[i];

    while (getline(cin, str)) {
        for (size_t i=0; i< str.size(); i++)
            cout << teclado[str[i]];
        cout << endl;
    }
    return 0;
}
