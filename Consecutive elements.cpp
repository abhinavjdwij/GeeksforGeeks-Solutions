/*input
1
aababbccd
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
	int t;
	char s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		for (int i = 1, p = 0; s[i] != '\0' || (s[++p] = '\0' && false); i++) // used the fact that other half of || gets executed only when first half fails
			if (s[i] != s[p]) (s[++p] = s[i]);
		printf("%s\n", s);
	}
	return 0;
}