#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		long long int num;
		cin >> num;

		vector<long long int> vt(num+1);
		if (num == 0)
			vt[0] = 1;
		else if (num == 1)
		{
			vt[0] = 1;
			vt[1] = 1;
		}
		else if (num == 2)
		{
			vt[0] = 1;
			vt[1] = 1;
			vt[2] = 2;
		}
		else if (num == 3)
		{
			vt[0] = 1;
			vt[1] = 1;
			vt[2] = 2;
			vt[3] = 4;
		}

		else
		{
			vt[0] = 1;
			vt[1] = 1;
			vt[2] = 2;
			vt[3] = 4;
			for (int j = 4; j <= num; j++)
			{
				vt[j] = vt[j - 1] + vt[j - 2] + vt[j - 3] + vt[j - 4];
			}
		}

		cout << vt[num] << endl;
	}
}