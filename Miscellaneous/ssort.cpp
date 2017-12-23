#include<iostream>
using namespace std;

int main()
{
	int n,i,j,min,loc,temp;
	//Taking input array size.
	cout << "Enter the no. of elements.\n";
	cin >> n;
	//Creating an array of the received input size
	int ar[n];
	cout << "Enter the elements.\n";
	for(i=0;i<n;i++)
	{
		cin >> ar[i];
	}

	for(i=0;i<n-1;i++)
	{
		//assign the element chosen to be minimum and its location 'loc'
		min = ar[i];
		loc = i;
		for(j=i+1;j<n;j++)
		{
			//if next element is smaller than min, assign new element to min and its position to loc
			if(min>ar[j])
			{
				min = ar[j];
				loc = j;
			}
		}
		//swap the elements
		temp = ar[i];
		ar[i] = ar[loc];
		ar[loc] = temp;
	}

	//print the output
	cout << "Sorted output: ";
	for(i=0;i<n;i++)
	{
		cout << ar[i] << " ";
	}

	return 0;
}