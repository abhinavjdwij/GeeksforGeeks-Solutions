/*input
1
15 19
3 14 3 14
2
4 7
2 6 2 4
7 13
2 8 3 4
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
using namespace std;
 
template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}

int n, m, dp[30][30];
bool visited[30][30];

void bfs(int x, int y) {
	dp[x][y] = 0;
	std::queue< std::pair<int, int> > q;
	std::pair<int, int> p;
	q.push(mp(x, y));
	visited[x][y] = true;
	while (!q.empty()) {
		p = q.front();
		q.pop();
		x = p.first; y = p.second;
		if (x-1 >= 1 && y+2 <= m && !visited[x-1][y+2]) {
			dp[x-1][y+2] = dp[x][y]+1;
			q.push(mp(x-1, y+2));
			visited[x-1][y+2] = true;
		}
		if (x-1 >= 1 && y-2 >= 1 && !visited[x-1][y-2]) {
			dp[x-1][y-2] = dp[x][y]+1;
			q.push(mp(x-1, y-2));
			visited[x-1][y-2] = true;
		}
		if (x+1 <= n && y+2 <= m && !visited[x+1][y+2]) {
			dp[x+1][y+2] = dp[x][y]+1;
			q.push(mp(x+1, y+2));
			visited[x+1][y+2] = true;
		}
		if (x+1 <= n && y-2 >= 1 && !visited[x+1][y-2]) {
			dp[x+1][y-2] = dp[x][y]+1;
			q.push(mp(x+1, y-2));
			visited[x+1][y-2] = true;
		}
		if (x-2 >= 1 && y+1 <= m && !visited[x-2][y+1]) {
			dp[x-2][y+1] = dp[x][y]+1;
			q.push(mp(x-2, y+1));
			visited[x-2][y+1] = true;
		}
		if (x-2 >= 1 && y-1 >= 1 && !visited[x-2][y-1]) {
			dp[x-2][y-1] = dp[x][y]+1;
			q.push(mp(x-2, y-1));
			visited[x-2][y-1] = true;
		}
		if (x+2 <= n && y+1 <= m && !visited[x+2][y+1]) {
			dp[x+2][y+1] = dp[x][y]+1;
			q.push(mp(x+2, y+1));
			visited[x+2][y+1] = true;
		}
		if (x+2 <= n && y-1 >= 1 && !visited[x+2][y-1]) {
			dp[x+2][y-1] = dp[x][y]+1;
			q.push(mp(x+2, y-1));
			visited[x+2][y-1] = true;
		}
	}
}

int main() {
	int t, x, y;
	scanf("%d", &t);
	while (t--) {
		memset(visited, false, sizeof(visited));
		memset(dp, -1, sizeof(dp));
		scanf("%d%d", &n, &m);
		scanf("%d%d", &x, &y);
		bfs(x, y);
		scanf("%d%d", &x, &y);
		printf("%d\n", visited[x][y] ? dp[x][y] : -1);
	}
	return 0;
}