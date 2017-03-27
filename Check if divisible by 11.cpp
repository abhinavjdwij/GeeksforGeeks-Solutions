/*input
2
76945
363588395960667043875487
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

// A number is divisible by 11 if difference of alternating sum of its digits is divisible by 11

int main() {
	int t, n;
	char s[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		n = 0;
		for (int i = 0; s[i] != '\0'; i++)
			n = (i % 2 == 0) ? n - (s[i] - '0') : n + (s[i] - '0');
		printf("%d\n", n % 11 == 0);
	}
	return 0;
}