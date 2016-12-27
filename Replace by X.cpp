/*input
2
abababcdefababcdab
ab
geeksforgeeks
geeks
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

// Idea: Use Rabin Karp To Replace All Instances of pattern by 'X'*len(pattern) in text, then remove duplicate consecutive 'X' in text

bool check(char *a, char *b, int p) {
	for (int i = 0; b[i] != '\0'; i++)
		if (a[p+i] != b[i])
			return false;
	return true;
}

void rabin_karp(char *text, char *s) {
	int hash = 0, c = 0, x = strlen(s), y = strlen(text);
	if (x > y) return;
	std::vector<int> pos;
	for (int i = 0; i < x; i++) {
		hash += s[i];
		c += text[i];
	}
	if (hash == c && check(text, s, 0)) pos.pb(0);
	for (int i = x; i < y; i++) {
		c += text[i] - text[i-x];
		if (hash == c && check(text, s, i-x+1)) pos.pb(i-x+1);
	}
	for (int i = 0; i < pos.size(); i++) {
		for (int j = pos[i]; j < pos[i]+x; j++)
			text[j] = 'X';
	}
}

void removeDuplicateX(char *s) {
	int p = 1, n = strlen(s);
	for (int i = 1; i < n; i++) {
		if (s[i] == 'X' && s[p-1] == 'X') continue;
		s[p++] = s[i];
	}
	s[p] = '\0';
}

int main() {
	int t;
	char a[1010], b[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s%s", a, b);
		rabin_karp(a, b);
		removeDuplicateX(a);
		printf("%s\n", a);
	}
	return 0;
}