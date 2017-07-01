#include<iostream>
using namespace std;

int main()
{
	int n;
	int dp[1001][10] = { 0, };

		cin >> n;
		for (int i = 0; i < 10; i++) 
		{
			dp[1][i] = 1;
		}
		for (int i = 2; i <= n; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				for (int k = j; k >= 0; k--)
				{
					dp[i][j] += (dp[i - 1][k]) % 10007;
				}
			}
		}
		int sum = 0;
		for (int i = 0; i < 10; i++) 
		{
			sum += (dp[n][i]) % 10007;
		}
		cout << sum % 10007 << endl;

		return 0;
}