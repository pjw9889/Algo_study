#include <stdio.h>
int main()
{
	int N;
	int K;
	int dp[1001][1001];
	scanf("%d %d", &N, &K);

	dp[0][0] = 1;
	dp[1][0] = 1;
	dp[1][1] = 1;
	for (int i = 1; i <= N; i++)
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == N)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % 10007;
			if (i == N && j == K)
				break;
		}
	printf("%d\n", dp[N][K]);
	return 0;
}

