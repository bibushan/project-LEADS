#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	     int n,ar[32]={};
	     cin>>n;
	     for(int i=0; i<n; i++){
	          int a,j=0;
	          cin>>a;
	          while(a){
	               if(ar[j]==0)
	                    ar[j]=a%2;
	               a/=2;
	               j++;
	          }
	     }
	     int sol=0;
	     for(int i=0; i<32; i++)
	          sol+=ar[i];
	     cout<<sol<<endl;
	}
	return 0;
}
