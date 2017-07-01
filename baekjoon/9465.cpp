#include<iostream>
#include<algorithm>
using namespace std;
int arr[3][100010] = { 0 };
int dp[3][100010] = { 0 };
int main()
{
	int testcase;
	cin >> testcase;
	
	for (int i = 0; i < testcase; i++)
	{
		int num;
		cin >> num;
		for (int j = 1; j <= 2; j++)
		{
			for (int k = 1; k <= num; k++)
			{
				cin >> arr[j][k];
			}
		}

		dp[1][1] = arr[1][1];
		dp[2][1] = arr[2][1];

		for (int j = 2; j <= num; j++)
		{
			dp[1][j] = max(max(dp[1][j - 1],dp[2][j-1]+arr[1][j]),arr[1][j]+dp[2][j-2]);
			dp[2][j] = max(max(dp[2][j - 1], dp[1][j-1]+arr[2][j]), arr[2][j] + dp[1][j-2]);
		}

		cout << max(dp[1][num], dp[2][num]) << endl;

		for (int j = 1; j <= 2; j++)
		{
			for (int k = 1; k <= num; k++)
			{
				dp[j][k] = 0;
			}
		}
	}
}