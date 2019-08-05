#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, t;
    char id;
    string julgamento;
    vector<int> tempo;
    vector<bool> acc;

    while (cin >> n && n) {
        tempo.assign(26, 0);
        acc.assign(26, 0);
        int  s=0, p=0;
        for (int i=0; i<n; i++) {
            cin >> id >> t >> julgamento;
            tempo[id-'A'] += (julgamento == "correct" ? t : 20);
            acc[id-'A'] = (julgamento == "correct");
        }
        for (int i=0; i<26; i++) {
            if (acc[i]) {
                s++;
                p += tempo[i];
            }
        }
        cout << s << " " << p << endl;
    }

    return 0;
}
