#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;

ll _sieve_size;
vi primes;
bitset<10000010> bs;

void sieve(ll upperbound){
	_sieve_size = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;

	for(ll i = 2; i <= _sieve_size; i++){
		if(bs[i]){
			for(ll j = i * i; j <= _sieve_size; j += i){
				bs[j] = 0;
			}

			primes.push_back((ll) i);
		}
		
	}
}

vi primeFactors(ll N){
	vi factors;
	ll PF_idx = 0;
	ll PF = primes[0];

	while(N != 1 && (PF * PF <= N)){
		while(N % PF == 0){
			N /= PF;
			factors.push_back(PF);
		}
		PF = primes[++PF_idx];
	}

	if(N != 1)
		factors.push_back(N);

	return factors;
}

bool ehDesp(ll n){
	vi fat = primeFactors(n);
	set<ll> cj;

	if(fat.size() > 1){
		for(int i = 0; i < (int)fat.size(); i++){
			cj.insert(fat[i]);
		}

		if(fat.size() == cj.size())
			return true;
	}

	return false;
}

ll div(ll n){
	ll tot = 0;
	vi fat;

	for(ll i = 1; i * i <= n; i++){
		if(n % i == 0){
			if(ehDesp(i) == true){
				tot++;
			}

			if(i != (n / i)){
				if(ehDesp(n / i) == true){
					tot++;
				}
			}
		}
	}
	return tot;
}

int main(){
	ll num;
	sieve(10000010);

	cin >> num;

	ll res = div(num);
	cout << res << endl;

	return 0;
}
