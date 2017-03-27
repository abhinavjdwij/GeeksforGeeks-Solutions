/*input
2
3 4
1 0 0 0 1 1 0 1 0 1 1 1
2 3
3 4
1 1 1 1 0 0 0 1 0 0 0 1
0 3
*/

/*~~~~~~~~~~~~~~~~~~~~dwij28 == Abhinav Jha~~~~~~~~~~~~~~~~~~~~*/

#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define MAX(a, b) ((a > b) ? a : b)
#define MIN(a, b) ((a < b) ? a : b)
#define set_bit(n, x, i) (n ^ ((-x ^ n) & (1 << i)))
#define get_bit(n, i) ((n >> i) & 1) 
using namespace std;
 
template<typename T>void scan(T&x){bool n=false;register T c=getchar();x=0;if(c=='-'){n=true;c=getchar();}for(;(c>47&&c<58);c=getchar()){x=(x<<1)+(x<<3)+c-48;}if(n){x*=-1;}}
template<typename T>void allocate(T **x,T n){*x=(T*)malloc(sizeof(T)*n);}

int n, m, graph[25][25], dp[25][25];
std::pair<int, int> dest;

void bfs() {
	std::queue< std::pair<int, int> > q;
	int x, y;
	q.push(mp(0, 0));
	dp[0][0] = 0;
	while (!q.empty()) {
		x = q.front().first; y = q.front().second;
		q.pop();
		if (x-1 >= 0 && graph[x-1][y] && dp[x-1][y] == -1) {
			dp[x-1][y] = dp[x][y]+1;
			q.push(mp(x-1, y));
		}
		if (x+1 < n && graph[x+1][y] && dp[x+1][y] == -1) {
			dp[x+1][y] = dp[x][y]+1;
			q.push(mp(x+1, y));
		}
		if (y-1 >= 0 && graph[x][y-1] && dp[x][y-1] == -1) {
			dp[x][y-1] = dp[x][y]+1;
			q.push(mp(x, y-1));
		}
		if (y+1 < m && graph[x][y+1] && dp[x][y+1] == -1) {
			dp[x][y+1] = dp[x][y]+1;
			q.push(mp(x, y+1));
		}
	}
}

int main() {
	int t, x, y;
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				scanf("%d", &graph[i][j]);
		scanf("%d%d", &x, &y);
		dest = mp(x, y);
		memset(dp, -1, sizeof(dp));
		if (graph[0][0]) bfs();
		printf("%d\n", dp[dest.first][dest.second]);
	}
	return 0;
}