#include <bits/stdc++.h>
#include <vector>

using namespace std;

int n, m;
vector<int> v= {1, 2, 45, 23, 20 ,12, 40 ,50, 29};

int f(int at, int w)
{
	if (w == 0) return 1;
	if (at == (int)v.size()) return 0;
	if (w < 0) return 0;
	
	if (dp[at][w] != -1) return dp[at][w];
	
	int op1 = f(at + 1, w);
	int op2 = f(at + 1, w - v[at]);
	
	return dp[at][w] = op1 || op2;
}



int main()
{
		
	if (f(0, 150))
		printf("deu\n");
	else
		printf("nao\n");
}
