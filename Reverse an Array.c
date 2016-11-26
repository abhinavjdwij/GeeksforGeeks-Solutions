/*input
1
4
1 2 3 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	int t, n, i, data[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &data[i]);
		for (i = n-1; i >= 0; i--)
			printf("%d ", data[i]);
		printf("\n");
	}
	return 0;
}