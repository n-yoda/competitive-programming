#include <string>
#include <iostream>
#include <vector>

#define MOD 1000000007ll
using namespace std;

string jumon;
long long dp[1010];

int main()
{
	vector<string> phs;
	string input;
	int n;
	cin >> n;
	cin >> jumon;
	for(int i = 0; i < n; i ++)
	{
		cin >> input;
		phs.push_back(input);
	}
	dp[jumon.size()] = 1;
	for(int i = jumon.size() - 1; i >= 0; i --)
	{
		dp[i] = 0;
		for(int j = 0; j < phs.size(); j++)
		{
			if (i + phs[j].size() <= jumon.size())
			{
				bool ok = true;
				for(int k = 0; k < phs[j].size(); k++)
				{
					if(phs[j][k] != jumon[i + k])
					{
						ok = false;
						break;
					}
				}
				if(ok)
				{
					dp[i] = (dp[i] + dp[i + phs[j].size()]) % MOD;
				}
			}
		}
	}
	cout << dp[0] % MOD << endl;
}
