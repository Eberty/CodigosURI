#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string str;
    map<string, int> especies;

    cin >> n;
    cin.ignore();
    cin.ignore();
    for (int i=0; i<n; i++) {
        if (i != 0)
            printf("\n");
        int total = 0;
        while (getline(cin, str) && str[0] != '\0') {
            especies[str]++;
            total++;
        }
        for (map<string, int>::iterator p=especies.begin(); p!=especies.end(); ++p)
            printf("%s %.4f\n", ((*p).first).c_str(), ((*p).second / (1.0*total)) * 100);
        especies.clear();
    }

    return 0;
}

