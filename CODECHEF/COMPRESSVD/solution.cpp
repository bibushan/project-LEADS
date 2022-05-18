#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     int n, i, count=0;
	     cin>>n;
	     int a[n];
	     for(i=0; i<n; i++){
	          cin>>a[i];
	     }
	     i=0;
	     if(n==1)
	     {
	          cout<<1<<endl;
	     }
	     else if(n==2)
	     {
	         if(a[0]==a[1])
	               cout<<n-1<<endl;
	         else
	               cout<<n<<endl;
	     }
	     else{
	          for(int j=0; j<n-1; j++)
	          {
	               if(a[j]==a[j+1])
	                    count++;
	          }
	     cout<<(n-count)<<endl;
	     }
	     
	}
	return 0;
}
