/*input
1
6
0 1 1 2 2 3
*/

#include <stdio.h>
#include <string.h>

int main() {
	int t, n, i, x, check[100010];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(check, 0, sizeof(check));
		for (i = 0; i < n; i++) {
			scanf("%d", &x);
			check[x] = 1;
		}
		for (i = 1; i <= n; i++) {
			if (!check[i])
				printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}