/*input
3
5  
hello
12
zxvczbtxyzvy
6
xxyyzz
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
	int t, n, check[26];
	bool flag;
	char s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%s", &n, s);
		memset(check, 0, sizeof(check));
		flag = false;
		for (int i = 0; s[i] != '\0'; i++)
			check[s[i]-97]++;
		for (int i = 0; s[i] != '\0'; i++) {
			if (check[s[i]-97] == 1) {
				printf("%c\n", s[i]);
				flag = true;
				break;
			}
		}
		if (!flag) printf("-1\n");
	}
	return 0;
}