#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
          for(int i=0;i<t;i++)
          {
	     int x;
	     float ans,sol;
	     cin>>x;
	     ans = 0.143*x;
	     sol = pow(ans,x);
	     cout<<round(sol)<<endl;
          }
	return 0;
}
