/*input
2
geeksforgeeks
geeksquiz
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

int num(char c) {
	if (c == 'z') return 9;
	if (c >= 's') c -= 1;
	return (int) ((c - 97) / 3 + 2);
}

int main() {
	int t;
	char s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		for (int i = 0; s[i] != '\0'; i++)
			printf("%d", num(s[i]));
		printf("\n");
	}
	return 0;
}