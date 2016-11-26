/*input
2
3
3 1 5
4
5 16 6 15
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

int t, n, data[100010], counts[1000010];

int count1(int n) {
	int c = 0;
	while (n) {
		n &= n-1;
		c += 1;
	}
	return c;
}

void pre() {
	for (int i = 0; i <= 1000000; i++)
		counts[i] = count1(i);
}

int compare(int a, int b) { return counts[a] > counts[b]; }

int main() {
	pre();
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &data[i]);
		}
		std::stable_sort(data, data+n, compare);
		for (int i = 0; i < n; i++)
			printf("%d ", data[i]);
		printf("\n");
	}
	return 0;
}