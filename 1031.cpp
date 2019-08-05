#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    while (cin >> n && n) {
        int i;
        for (i = 1; ; i++) {
            vector<int> vet(n);
            for (int j = 0; j < n; j++)
                vet[j] = j + 1;

            int j = 0;
            while (vet.size()) {
                if (vet[j] == 13)
                    break;
                vet.erase(vet.begin() + j);
                j += (i - 1);
                j %= vet.size();
            }
            if (vet.size() == 1) {
                cout << i << endl;
                break;
            }
        }
    }

    return 0;
}

