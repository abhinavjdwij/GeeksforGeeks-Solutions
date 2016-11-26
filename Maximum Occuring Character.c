/*input
2
testsample
geeksforgeeks
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define ll long long

int main() {
	int t, count[26], m, i, p;
	char s[110];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		memset(count, 0, sizeof(count));
		for (i = 0; s[i] != '\0'; i++)
			count[s[i]-97]++;
		m = p = -1;
		for (i = 0; i < 26; i++) {
			if (count[i] > m) {
				p = i;
				m = count[i];
			}
		}
		printf("%c\n", p+97);
	}
	return 0;
}