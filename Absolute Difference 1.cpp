/*input
2
8 54
7 98 56 43 45 23 12 8
9 1000
87 89 45 235 465 765 123 987 499 655
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t, n, k, x;
	char s[10005];
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &k);
		bool ans = false;
		while (n--) {
			scanf("%s", s);
			bool flag = true;
			x = (s[0] - '0');
			for (int i = 1, l = strlen(s); i < l; i++) {
				if (abs(s[i] - s[i-1]) != 1) {
					flag = false;
					break;
				}
				x =  x*10 + (s[i] - '0');
			}
			if (flag && x < k) {
				ans = true;
				printf("%s ", s);
			}
		}
		if (! ans) printf("-1");
		printf("\n");
	}
	return 0;
}