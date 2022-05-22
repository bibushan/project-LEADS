#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     int n,i,j,count=0;
	     cin>>n;
	     string s;
	     cin>>s;
	     for(i=0; i<n-1-i; i++)
	          count += s[i]!=s[n-i-1];
	     cout<<(count+1)/2<<endl;
	     
	     
	}
	return 0;
}
