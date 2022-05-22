#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     int n,i,p=0;
	     cin>>n;
	     int arr[n];
	     for(i=0; i<n; i++)
	     {
	          cin>>arr[i];
	     }
	     for(i=n-1; i>0; i--)
	     {
	          if(arr[i]!=0)
	          {
	               p=i;
	               break;
	          }
	     }
	     cout<<p<<endl;
	}
	return 0;
}
