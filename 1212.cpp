#include<bits/stdc++.h>

using namespace std;

int main(){
	int a, b, carry, res;

	scanf("%d %d", &a, &b);
	while(a != 0 || b != 0){
		carry = res = 0;
		while(a > 0 || b > 0){
			if(((a % 10) + (b % 10) + carry) > 9){
				carry = 1;
				res++;
			}else{
				carry = 0;
			}

			a /= 10;
			b /= 10;
		}

		if(res){
			printf("%d carry operation", res);
			if(res > 1)
				printf("s.");
			else
				printf(".");
		}else{
			printf("No carry operation.");
		}
		printf("\n");

		scanf("%d %d", &a, &b);	
	}

	return 0;
}
