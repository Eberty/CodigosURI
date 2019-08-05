#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int fat[20];
    string str;
    fat[0] = 1;
    for (int i = 1; i < 20; i++)
        fat[i] = fat[i-1] * i;

    while ((cin >> str) && str!="0") {
        cout << fat[str.size()] << endl;
    }
    return 0;
}
