#include <bits/stdc++.h>

using namespace std;

vector<long long int> fib(100010);

void mountFib() {
    fib[0] = 1;
    fib[1] = 1;
    for (int i=2; i<100010; i++)
        fib[i] = fib[i-1] + fib[i-2];
}

int main() {
    long long int k, res, notfib = 0, isfib = 1;

    cin >> k;
    mountFib();
    for(long long int i = 1; notfib != k ; i++) {
        if(i == fib[isfib]) {
            isfib++;
        } else {
            notfib++;
            res = i;
        }
    }
    cout << res << endl;

    return 0;
}
