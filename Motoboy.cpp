#include <bits/stdc++.h>
#include <vector>

using namespace std;

int n, m;
vector<int> valor;
vector<int> peso;
vector<vector<int> > dp;

int f(int at, int w)
{
	if (at == n) return 0;
	if (dp[at][w] != -1) return dp[at][w];
	
	int resp = f(at + 1, w);
	if (w >= peso[at])
		resp = max(resp, valor[at] + f(at + 1, w - peso[at]));

	dp[at][w] = resp;
	return resp;
}

int main()
{
	
	while(cin >> n && n)
	{
		cin >> m;
		valor.clear();
		peso.clear();
		
		for (int i = 0; i < n; i++)
		{
			int v, w; cin >> v >> w;
			
			valor.push_back(v);
			peso.push_back(w);
		}
		
		
		
		dp = vector<vector<int> > (n, vector<int>(m + 1, -1));
		
		cout << f(0, m) << " min." << endl;
	}
}
