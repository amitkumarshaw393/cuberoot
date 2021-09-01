#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(void)
{
	int n,a;
	cout<<"enter the value of n  ";
	cin>>n;
	vector<int>v;
	vector<int> g1;
	for(int i=0;i<n;i++)
	{
 	 cin>>a;
 	 g1.push_back(a);
	}
	    for(auto x:v)
	    cout<<x<<" ";
	    cout<<endl;
	  
	auto sum = accumulate(v.begin(),v.end(),0);
	    
	   float o=cbrt(sum);
	 int b=o;
	   if(o==b)
	   {
	 	cout<<"yes";
	}
	else
	{
			int num=o+1;
			int sub1=pow(num,3)-sum;
			cout<<sub1;
		}
		
}
