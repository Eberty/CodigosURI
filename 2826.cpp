#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> str(2);
    for (int i=0; i<2; i++)
        cin >> str[i];
    sort(str.begin(), str.end());
    for (int i=0; i<2; i++)
        cout << str[i] << endl;

    return 0;
}
