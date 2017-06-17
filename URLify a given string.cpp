/*input
2
Mr John Smith
13
Mr Benedict Cumberbatch  
25
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t, c, x, y;
	char s[1010];
	scanf("%d\n", &t);
	while (t--) {
		scanf("%[^\n]%d\n", s, &y);
		c = 0;
		for (int i = 0; s[i] != '\0'; i++)
			c += (int) (s[i] == ' ');
		x = 2*c + y;
		s[x--] = '\0';
		for (y = y-1; y >= 0; y--) {
			if (s[y] != ' ') {
				s[x--] = s[y];
			}
			else {
				s[x--] = '0';
				s[x--] = '2';
				s[x--] = '%';
			}
		}
		printf("%s\n", s);
	}
	return 0;
}