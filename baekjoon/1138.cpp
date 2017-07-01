#include<iostream>
using namespace std;

int main()
{
	int arr[11] = { 0 };
	int num;
	cin >> num;
	int count = 0;
	for (int i = 1; i <= num; i++)
	{
		int order;
		cin >> order;
		
		for (int j = 1; j <= num; j++)
		{
			if (arr[j] == 0)
			{
				count++;
				if (count == order + 1)
				{
					arr[j] = i;
				}
			}
		}
		count = 0;
	}
	
	
	for (int i = 1; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << arr[num] << endl;
}