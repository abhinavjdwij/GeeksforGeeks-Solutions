/*input
2
vSKwWDjwIerQKMgVaAniorRJlerbKpDgvyKBLPNwSRWtylqKewNFtERNuUBBHAsGkTSSfdhQHJYvAighAdeG
BruceWayneIsBatman
You
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
	int t, n, l;
	char s[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		n = l = strlen(s);
		for (int i = 0; i < l; i++)
			if (s[i] >= 'A' && s[i] <= 'Z')
				n++;
		if (s[0] >= 'A' && s[0] <= 'Z') n -= 1; // first caps to be ignored
		for (int i = strlen(s)-1, p = n-1; i >= 0; i--, p--) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[p--] = (char) (s[i] + ' ');
				s[p] = ' ';
			}
			else s[p] = s[i];
		}
		s[n] = '\0';
		printf("%s\n", s);
	}
	return 0;
}