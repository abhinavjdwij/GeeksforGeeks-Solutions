/*input
2
geeksforgeeks
hellogeeks
*/

/*~ @author = dwij28 (Abhinav Jha) ~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
	int t, check[26];
	bool flag;
	char s[1010];
	scanf("%d", &t);
	while (t--) {
		scanf("%s", s);
		memset(check, false, sizeof(check));
		flag = false;
		for (int i = 0; s[i] != '\0'; i++) {
			check[s[i]-97]++;
			if (check[s[i]-97] > 1) {
				printf("%c\n", s[i]);
				flag = true;
				break;
			}
		}
		if (!flag) printf("-1\n");
	}
	return 0;
}