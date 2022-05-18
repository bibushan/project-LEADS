#include <iostream>
using namespace std;

int function(int n){
     int i=1;
     while(i*2 <= n)
          i *= 2;
     return i;
}

int main() {
     int t;
     cin>>t;
	while(t--){
	     int n;
	     cin>>n;
	     int hp=function(n);
	     int shp=hp/2;
	     int x=n-hp+1;
	     int y=hp-shp;
	     cout << max(x,y) << endl;
	     
	}
	return 0;
}
