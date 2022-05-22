#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     cin>>n;
	     int ar[n];
	     int na, nb, nc, nd;
	     for(int i=0; i<4; i++)
	          cin>>ar[i];
	     int *m= max_element(ar, ar+4);
	     cout<< *m<<endl;
	}
	return 0;
}
