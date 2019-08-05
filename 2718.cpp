#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, x, max, count, aux;
    cin >> n;
    while(n--) {
        cin >> x;
        max = count = 0;
        while(x > 0) {
            aux = x%2;
            x /= 2;
            if(aux)
                count++;
            else {
                if(count > max)
                    max = count;
                count = 0;
            }
        }
        if(count > max)
            max = count;
        cout << max << endl;
    }
    return 0;
}
