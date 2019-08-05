#include <bits/stdc++.h>

using namespace std;

int main() {
    string m[10] = {"GQaku", "ISblv", "EOYcmw", "FPZdnx", "JTeoy", "DNXfpz", "AKUgq", "CMWhr", "BLVis", "HRjt"};
    int n;
    cin >> n;
    cin.ignore(256, '\n');
    while (n--) {
        string s;
        getline(cin, s);
        for (size_t j = 0, count = 0; j < s.size() && count < 12; j++) {
            char c = s[j];
            for (int i = 0; i < 10; i++) {
                if (m[i].find(c) != string::npos) {
                    cout << i;
                    count++;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
