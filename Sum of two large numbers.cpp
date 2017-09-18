/*input
2
4 611
25 23
3 5
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t, l, c;
	char x[105], y[105], ans[105];
	scanf("%d", &t);
	while (t--) {
		scanf("%s%s", x, y);
		if (strlen(x) < strlen(y)) {
			printf("%s\n", x);
			continue;
		}
		std::reverse(x, x + strlen(x));
		std::reverse(y, y + strlen(y));
		if (strlen(x) > strlen(y)) {
			for (int i = strlen(y); i < strlen(x); i++)
				y[i] = '0';
		}
		y[strlen(x)] = '\0';
		l = strlen(x);
		c = 0;
		for (int i = 0; i < l; i++) {
			ans[i] = (((x[i] - '0') + (y[i] - '0') + c) % 10) + '0';
			c = ((x[i] - '0') + (y[i] - '0') + c) / 10;
		}
		ans[l] = '\0';
		std::reverse(ans, ans + l);
		std::reverse(x, x + l);
		printf("%s\n", c ? x : ans);
	}
	return 0;
}