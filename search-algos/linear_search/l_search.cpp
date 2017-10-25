#include<iostream>

using namespace std;

int main()
{
    int n,x;
    cout <<"enter size of array" <<endl;
    cin >>n;
    int arr[n];
    cout << "enter the values" <<endl;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout <<"enter the value you want to find" << endl;
    cin >> x;
    for(int i = 0; i < n; i++)
    {
      if(arr[i] == x)
      {
        cout << "Yes the element is at index\n" << i << endl;
        break;
      }
      if(i == n-1)
        cout << "No the value you want to find is not present in array" << endl;
    }
    return 0;
}
