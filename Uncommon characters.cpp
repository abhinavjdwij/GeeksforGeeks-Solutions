/*input
1
characters
alphabets
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t;
	bool x[26], y[26];
	char a[100010], b[100010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s%s", a, b);
		memset(x, false, sizeof(x));
		memset(y, false, sizeof(y));
		for (int i = 0; a[i] != '\0'; i++)
			x[a[i]-97] = true;
		for (int i = 0; b[i] != '\0'; i++)
			y[b[i]-97] = true;
		for (int i = 0; i < 26; i++) {
			if ((x[i] || y[i]) && !(x[i] && y[i]))
				printf("%c", i+97);
		}
		printf("\n");
	}
	return 0;
}