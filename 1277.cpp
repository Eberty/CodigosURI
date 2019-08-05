#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while (t--) {
		bool first = true;
        cin >> n;
        vector <tuple<string, string, int>> vet(n);
        for (int i=0; i<n; i++)
            cin >> get<0>(vet[i]);
        for (int i=0; i<n; i++) {
            cin >> get<1>(vet[i]);
            get<2>(vet[i]) = get<1>(vet[i]).size();
        }

        for (int i=0; i<n; i++) {
            size_t freq = 0;
            for (size_t j=0; j<get<1>(vet[i]).size(); j++) {
                if (get<1>(vet[i])[j] =='P')
                    freq++;
                else if (get<1>(vet[i])[j] =='M')
                    get<2>(vet[i])--;
            }

            if((freq / (double) get<2>(vet[i])) < 0.75) {
                if (first) {
                    cout << get<0>(vet[i]);
                    first = false;
                } else {
                    cout << " " << get<0>(vet[i]);
                }

            }
        }
        cout << endl;
    }

    return 0;
}
