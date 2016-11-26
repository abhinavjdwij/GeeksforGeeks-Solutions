/*input
2
3
3 5 4
5
6 4 9 7 8
*/

#include <stdio.h>

int compare(const void *a, const void *b) { return (*(int*)a - *(int*)b); }

int main() {
	int t, n, data[110], i, j, k, ans;
	scanf("%d", &t);
	while (t--) {
		ans = 0;
		scanf("%d", &n);
		for (i = 0; i < n; i++)
			scanf("%d", &data[i]);
		qsort(data, n, sizeof(int), compare);
		for (i = 0; i < n; i++) {
			for (j = i+1; j < n; j++) {
				for (k = j+1; k < n; k++) {
					if (data[k] < data[i] + data[j])
						ans += 1;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}