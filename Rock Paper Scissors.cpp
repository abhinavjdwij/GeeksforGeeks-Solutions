/*input
7
RR
RS
SR
SP
PP
PS
RP
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
	char s[5];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		if (s[0] == s[1]) printf("DRAW\n");
		else if ((s[0] == 'P' && s[1] == 'R')
				|| (s[0] == 'R' && s[1] == 'S')
				|| (s[0] == 'S' && s[1] == 'P'))
			printf("A\n");
		else printf("B\n");
	}
	return 0;
}