#include <bits/stdc++.h>

using namespace std;

typedef struct t {
	int pt, gp, gc, gv;
} t_time;

int main() {
	int n, v, m;
	string aux;
	t_time a, b;
	
	cin >> n;
	while (n--){
		a.pt = a.gp = a.gc = a.gv = b.pt = b.gp = b.gc = b.gv = 0;
		
		cin >> m >> aux >> v;
		a.gp += m;
		a.gc += v;
		b.gp += v;
		b.gc += m;
		b.gv += v;
		if (m > v){
			a.pt += 3;
		} else if (m < v){
			b.pt += 3;
		} else{
			a.pt += 1;
			b.pt += 1;
		}
		
		cin >> m >> aux >> v;
		b.gp += m;
		b.gc += v;
		a.gp += v;
		a.gc += m;
		a.gv += v;
		if (m > v){
			b.pt += 3;
		} else if (m < v){
			a.pt += 3;
		} else{
			a.pt += 1;
			b.pt += 1;
		}
		
		
		if (a.pt > b.pt)
			cout << "Time 1" << endl;
		else if (b.pt > a.pt)
			cout << "Time 2" << endl;
		else if ((a.gp-a.gc) > (b.gp-b.gc))
			cout << "Time 1" << endl;
		else if ((b.gp-b.gc) > (a.gp-a.gc))
			cout << "Time 2" << endl;
		else if (a.gv > b.gv)
			cout << "Time 1" << endl;
		else if (b.gv > a.gv)
			cout << "Time 2" << endl;
		else
			cout << "Penaltis" << endl;
	}
	
	
	return 0;
}
