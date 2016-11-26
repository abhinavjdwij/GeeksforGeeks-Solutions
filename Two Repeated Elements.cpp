/*input
1
4
1 2 1 3 4 3
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

int search(int data[], int n, int x) {
	int p = -1;
	for (int i = 0; i < n; i++) {
		if (data[i] == x)
			p = i;
	}
	return p;
}

int main() {
	int t, n, data[110], s1, s2, c, d, a, b, x, y;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		s1 = s2 = 0;
		for (int i = 0; i < n+2; i++) {
			scanf("%d", &data[i]);
			s1 += data[i];
			s2 += data[i]*data[i];
		}
		c = s2 - n*(n+1)*(2*n+1)/6;
		d = s1 - n*(n+1)/2;
		a = (d + (int) (sqrt(2*c - d*d))) / 2;
		b = (d - (int) (sqrt(2*c - d*d))) / 2;
		x = search(data, n+2, a);
		y = search(data, n+2, b);
		if (x > y) swap(a, b);
		printf("%d %d\n", a, b);
	}
	return 0;
}