/*input
2
3
1 3 3
NES
4
10 10 10 10
NWSE
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

double ans;
int x, y;

void add(int d, char c) {
	ans += (double) d;
	if (c == 'N') y += d;
	else if (c == 'S') y -= d;
	else if (c == 'E') x += d;
	else x -= d;
}

int main() {
	int t, n, data[110];
	char s[110];
	scanf("%d", &t);
	while (t--) {
		x = y = ans = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &data[i]);
		scanf("%s", s);
		for (int i = 0; i < n; i++)
			add(data[i], s[i]);
		ans += double(sqrt(x*x + y*y));
		printf("%d\n", (int) ceil(ans));
	}
	return 0;
}