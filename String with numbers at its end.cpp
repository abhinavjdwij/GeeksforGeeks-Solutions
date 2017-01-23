/*input
2
geeks5
geeksforgeeks15
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

int fetch(char *s, int *m) {
	int n = strlen(s), ans = 0;
	for (int i = n-1, p = 1; i >= 0; i--) {
		if (s[i] < '0' || s[i] > '9') {
			*m = n-i-1;
			break;
		}
		ans = (s[i] - '0')*p + ans;
		p *= 10;
	}
	return ans;
}

int main() {
	int t, l, m;
	char s[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		l = fetch(s, &m);
		printf("%d\n", l == strlen(s)-m);
	}
	return 0;
}