/*input
2
3
131 11 48
4
111 222 333 446
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;

template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

bool check[10];

void mark(int n) {
	while (n) {
		check[n%10] = true;
		n /= 10;
	}
}

int main() {
	int t, n, x;
	scanf("%d", &t);
	while (t--) {
		memset(check, false, sizeof(check));
		scanf("%d", &n);
		while (n--) {
			scanf("%d", &x);
			mark(x);
		}
		for (int i = 0; i <= 9; i++)
			if (check[i])
				printf("%d ", i);
		printf("\n");
	}
	return 0;
}