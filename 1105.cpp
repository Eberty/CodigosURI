#include <bits/stdc++.h>

using namespace std;

int main() {
	int b, n, d, c, v;
    
    while(scanf("%d %d", &b, &n) && b && n){
        int reservas[b];
          
        for(int i = 0; i < b; i++)
            scanf("%d", &reservas[i]);
        
        for(int i = 0; i < n; i++){
            scanf("%d %d %d", &d, &c, &v);
            reservas[d-1] -= v;
            reservas[c-1] += v;
        }
        int i;
        for(i = 0; i < b; i++){
            if(reservas[i] < 0)
                break;
        }
        
        if(i == b)
			printf("S\n");
        else
			printf("N\n");
}
	return 0;
}
