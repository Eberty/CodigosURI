#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v;
	int q, n, num, c = 0, i;
	
	scanf("%d %d", &n, &q);
	while (q!=0 && n!=0){
		printf("CASE# %d:\n", ++c);
		for (i=0; i<n; i++){
			scanf("%d", &num);
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		for (int j=0; j<q; j++){
			scanf("%d", &num);
			for (i=0; i<v.size(); i++){
				if(v[i] == num)
					break;
			}
			if(i < v.size())
				printf("%d found at %d\n", num, i+1);
			else
				printf("%d not found\n", num);
		}
		
		v.clear();
		scanf("%d %d", &n, &q);
	}
	
	
	return 0;
}
