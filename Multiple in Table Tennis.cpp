/*input
2                                            
7                                              
2 3
4 5 7 8 9 10 14
6
5 3
1 9 9 10 9 18
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

int main() {
	int t, k, m, n, a, b, x;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d%d", &k, &m, &n);
		a = b = 0;
		for (int i = 0; i < k; i++) {
			scanf("%d", &x);
			if (x % m == 0) a++;
			else if (x % n == 0) b++; 
		}
		printf("%s\n", ((a == b) ? "Both" : (a > b) ? "Ram" : "Rohan"));
	}
	return 0;
}