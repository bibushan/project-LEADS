#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     int x,y;
	     cin>>x>>y;
	     int ans1, ans2;
	     ans1=(1000-4*y)+(500-2*(x+y));
	     ans2=(1000-4*(x+y))+(500-2*x);
	     cout<<max(ans1, ans2)<<endl;
	}
	return 0;
}
