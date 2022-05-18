#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	     int n, c=0, d=0;
	     char s1[100]; char s2[10]="START38"; char s3[10]="LTIME108";
	     cin>>n;
	     for(int i=0; i<n; i++)
	     {
	          cin>>s1;
	          if(strcmp(s1,s2)==0)
	               c++;
	          else if(strcmp(s1,s3)==0)
	               d++;
	     }
	     cout<<c<<" "<<d<<endl;
	}
	return 0;
}
