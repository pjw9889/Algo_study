#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int n;
int visit[1001];
int graph[1001][1001];

void dfs(int a) {
	printf("%d ", a);
	for (int i = 1; i <= n; i++) {
		if (graph[a][i] && visit[i] == 0) {
			visit[i] = 1;
			dfs(i);
		}
	}
}
void bfs(int b) {

	queue<int> que;
	for (int i = 0; i <= n; i++)
		visit[i] = 0;

	que.push(b);
	visit[b] = 1;

	while (!que.empty()) {
		int num = que.front();
		que.pop();

		printf("%d ", num);

		for (int i = 1; i <= n; i++) {
			if (graph[num][i] && visit[i] == 0) {
				visit[i] = 1;
				que.push(i);
			}
		}
	}
	printf("\n");
}
int main() {

	int m, start;
	int idx1, idx2;

	scanf("%d %d %d", &n, &m, &start);

	for (int i = 0; i < m; i++) {
		scanf("%d %d", &idx1, &idx2);

		graph[idx1][idx2] = graph[idx2][idx1] = 1;
	}

	visit[start] = 1;
	dfs(start);
	printf("\n");
	bfs(start);
	return 0;
}

