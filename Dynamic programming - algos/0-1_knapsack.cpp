// C++ program to solve 0-1 knapsack problem
#include <bits/stdc++.h>
using namespace std;
typedef long long ks;

ks knapsack(ks V[], ks W[], ks n, ks maxWeight)
{
	ks K[n + 1][maxWeight + 1]; // Declaring the table
		for(ks i = 0; i <= n; i++)
	{
		for(ks j = 0; j <= maxWeight; j++)
		{
			if(i == 0 || j == 0)
				K[i][j] = 0;

			else if(W[i - 1] <= j)// checking whether the weight of the element is less than the capacity.
				K[i][j] = max(V[i - 1] + K[i - 1][j - W[i - 1]], K[i - 1][j]);//  if true then take the maximum of the value of this element or the leave this element.

			else
				K[i][j] = K[i - 1][j]; // If the weight of the element is more than the capacity, then leave this element.
		}
	}
	return K[n][maxWeight];
}

int main()
{
	ks n;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	ks V[n], W[n];
	cout << "Enter " << n << " the values." << endl;
	for(ks i = 0; i < n; i++)
		cin >> V[i];
	cout << "Enter " << n << " corresponding weights." << endl;
	for(ks i = 0; i < n; i++)
		cin >> W[i];
	ks maxWeight;
	cout << "Enter the maximum capacity of the knapsack" << endl;
	cin >> maxWeight;
	cout << "The maximum total value obtained with the following knapsack" << endl;
	cout << knapsack(V, W, n, maxWeight) << endl;
	return 0;
}
