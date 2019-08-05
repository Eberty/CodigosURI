#include <cstdio>
#include <cstring>

using namespace std;

void rec (unsigned int i, char* p){
	if (p[i] != '0'){
		p[i] =  p[i] - 1;
		return;
	} else {
		p[i] = '9';
		rec (i-1, p);
	}
}

int main() {
	unsigned int i;
	char p[21];
	scanf("%s", p);
	while (strcmp(p, "-1") != 0){
		if (strcmp(p, "0") == 0){
			printf ("0\n");
		}else{
			rec (strlen(p)-1, p);
			if (strcmp(p, "0") == 0)
				printf ("0\n");
			else if (p[0]=='0'){
				for (i=1; i<strlen(p); i++)
					printf ("%c", p[i]);
				printf("\n");
			}else{
				printf("%s\n", p);
			}
		}
		scanf("%s", p);
	}
	return 0;
}
