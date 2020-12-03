#include <bits/stdc++.h>
using namespace std;
void printq(queue <int> q)
{
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main() {
int t,n,d,y;
cin>>t;
while(t--)
{cin>>n>>d;
 queue <int> a ;
 for(int i=0;i<n;i++){
     cin>>y;
      a.push(y);
 }

 
 int x=d%n;
 for(int i=0;i<x;i++){
     if(!a.empty()){
     int z=a.front();
     a.pop();
     a.push(z);
     }
 }
  printq(a);  
}
	return 0;
}
