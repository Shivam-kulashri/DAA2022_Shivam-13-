#include <bits/stdc++.h>
using namespace std;
int max(int a, int b) {
    return (a > b) ? a : b;
    }
int knapSack(int W, int wt[], int val[], int N)
{
	if (N == 0 || W == 0)
		return 0;
	if (wt[N - 1] > W)
		return knapSack(W, wt, val, N - 1);
	else
		return max(val[N - 1] + knapSack(W - wt[N - 1],wt, val, N - 1),knapSack(W, wt, val, N - 1));
}
int main()
{
	int val[] = { 90, 10, 20 };
	int wt[] = { 10, 20, 30 };
	int W = 30;
	int N = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, N);
	return 0;
}
