#include<bits/stdc++.h>

typedef struct no{
	struct no *dir, *esq;
	int val;
}tNo;

tNo raiz;

using namespace std;

void insere(tNo *no, int v){
	if(v > no->val){
		if(no->dir == NULL){
			no->dir = (tNo *) malloc(sizeof(tNo));
			no->dir->dir = no->dir->esq = NULL;
			no->dir->val = v;
			return;
		}
		insere(no->dir, v);
	}else{
		if(no->esq == NULL){
			no->esq = (tNo *) malloc(sizeof(tNo));
			no->esq->dir = no->esq->esq = NULL;
			no->esq->val = v;
			return;
		}
		insere(no->esq, v);
	}
}

void pre(tNo *no){
	if(no == NULL)
		return;

	printf(" %d", no->val);
	pre(no->esq);
	pre(no->dir);
}

void in(tNo *no){
	if(no == NULL)
		return;

	in(no->esq);
	printf(" %d", no->val);
	in(no->dir);
}

void post(tNo *no){
	if(no == NULL)
		return;

	post(no->esq);
	post(no->dir);
	printf(" %d", no->val);
}

int main(){
	int c, n, v, j = 1;

	scanf("%d", &c);
	while(c--){
		printf("Case %d:\n", j++);
		scanf("%d", &n);

		scanf("%d", &raiz.val);
		raiz.dir = raiz.esq = NULL;

		for(int i = 1; i < n; i++){
			scanf("%d", &v);

			insere(&raiz, v);
		}

		printf("Pre.:");
		pre(&raiz);
		printf("\nIn..:");
		in(&raiz);
		printf("\nPost:");
		post(&raiz);

		printf("\n\n");
	}

	return 0;
}
