/*input
2
aaaaaaaaaaa
abc
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
	int t, c;
	char s[100010], hex[100];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		string ans;
		c = 1;
		for (int i = 1; s[i] != '\0'; i++) {
			if (s[i] == s[i-1]) c++;
			else {
				ans += s[i-1];
				sprintf(hex, "%x", c);
				for (int j = 0; hex[j] != '\0'; j++)
					ans += hex[j];
				c = 1;
			}
		}
		ans += s[strlen(s)-1];
		sprintf(hex, "%x", c);
		for (int j = 0; hex[j] != '\0'; j++)
			ans += hex[j];
		std::reverse(ans.begin(), ans.end());
		cout << ans << endl;
	}
	return 0;
}