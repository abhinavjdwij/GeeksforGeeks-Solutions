/*input
2
geeksforgeeks
forgeeksgeeks
allergy
allergic
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1)

int main() {
	int t, i, flag, check[26];
	char s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		flag = 1;
		memset(check, 0, sizeof(check));
		for (i = 0; s[i] != '\0'; i++)
			check[s[i]-97]++;
		scanf("%s", s);
		for (i = 0; s[i] != '\0'; i++)
			check[s[i]-97]--;
		for (i = 0; i < 26; i++) {
			if (check[i]) {
				flag = 0;
				break;
			}
		}
		printf("%s\n", flag ? "YES" : "NO");
	}
	return 0;
}