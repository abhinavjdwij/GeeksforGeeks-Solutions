/*input
5
1324
3415436
1023422
03517
3555
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
	int t, n;
	char s[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		n = strlen(s);
		std::sort(s, s+n, std::greater<char>());
		for (int i = n-1; i >= 0; i--) {
			if ((s[i]-'0') % 2 == 0) {
				char temp = s[n-1];
				s[n-1] = s[i];
				s[i] = temp;
				break;
			}
		}
		std::sort(s, s+n-1, std::greater<char>());
		printf("%s\n", s);
	}
	return 0;
}