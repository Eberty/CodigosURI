#include <bits/stdc++.h>

using namespace std;

unsigned int countWordsInString (string const& str) {
    stringstream stream(str);
    string oneWord;
    unsigned int count = 0;
    while(stream >> oneWord)
        count++;
    return count;
}

int main() {
    int n;
    while (cin >> n) {
		int totalkg = 0;
        double v, totalvalue = 0;
        string str;
        for (int i=0; i<n; i++) {
            cin >> v;
            cin.ignore();
            getline(cin, str);
            cout << "day " << i+1 << ": " << countWordsInString(str) << " kg" << endl;
            totalkg += countWordsInString(str);
            totalvalue += v;
        }
        printf("%.2lf kg by day\n", (double)totalkg/n);
        printf("R$ %.2lf by day\n", (double)totalvalue/n);
    }
    return 0;
}
