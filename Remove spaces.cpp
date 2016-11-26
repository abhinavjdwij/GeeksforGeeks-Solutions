/*input
2
geeks  for geeks
    g f g
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
	int t, i, j;
	char s[1010];
	scanf("%d\n", &t);
	while (t--) {
		scanf(" %[^\n]s", s); // space before % is important to not take input any space before string
		i = j = 0;
		while (s[j] != '\0') {
			if (s[j] != ' ') {
				s[i++] = s[j];
			}
			j++;
		}
		s[i] = '\0';
		printf("%s\n", s);
	}
	return 0;
}