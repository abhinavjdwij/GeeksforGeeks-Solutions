/*input
2
geeksforgeeks
mask
removeccharaterfrom
string
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
	char a[110], b[110];
	bool check[100];
	scanf("%d", &t);
	while (t--) {
		memset(check, true, sizeof(check));
		scanf("%s%s", a, b);
		for (int i = 0; i < strlen(b); i++)
			check[b[i] - 97] = false;
		for (int i = 0; a[i] != '\0'; i++) {
			if (check[a[i] - 97])
				putchar(a[i]);
		}
		putchar('\n');
	}
	return 0;
}