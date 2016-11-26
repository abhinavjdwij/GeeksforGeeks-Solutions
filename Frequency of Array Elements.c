/*input
2
5
2 3 2 3 5
4
3 3 3 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	int t, count[110], i, x, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		memset(count, 0, sizeof(count));
		for (i = 0; i < n; i++) {
			scanf("%d", &x);
			count[x] += 1;
		}
		for (i = 1; i <= n; i++)
			printf("%d ", count[i]);
		printf("\n");
	}
	return 0;
}