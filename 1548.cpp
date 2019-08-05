#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *args[]){
	int n, m, nota;
	cin >> n;

	for (int i=0; i<n; i++){
		cin >> m;
		int res =0;
		queue<int> f;
		priority_queue<int> fp;

		for (int j=0; j<m; j++){
			cin>>nota;
			f.push(nota);
			fp.push(nota);
		}

		for (int j=0; j<m; j++){
			if (f.front()==fp.top())
				res++;
			f.pop();
			fp.pop();
		}
		cout << res << endl;
	}
	return 0;
}
