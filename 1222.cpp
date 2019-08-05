#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, c;
    string str;

    while (cin >> n >> l >> c) {
        int pag = 1, lin = 1, qtdc = 0;
        cin.ignore();
        getline(cin, str);

        for (size_t i=0; i < str.size(); i++) {
            qtdc++;
            if (qtdc > c){
				while (str[i] != ' ') {
					i--;
				}
				lin++;
				qtdc = 0;
				if (lin > l){
					pag++;
					lin = 1;
				}
			}
        }
        cout << pag << endl;
    }

    return 0;
}
