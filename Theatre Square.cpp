#include<bits/stdc++.h>
using namespace std;

int main(){

  long long int n,m,a,res;
  cin>>n>>m>>a;

  res=((n+a-1)/a)*((m+a-1)/a);

  cout<<res<<endl;



 return 0;
}
