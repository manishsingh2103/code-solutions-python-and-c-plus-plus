https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
cin>>t;
int n,sum;
while(t--)
{
    cin>>n>>sum;
    int arr[n+1];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    int curr_sum=arr[0],start=0,i;
    
  for ( i = 1; i <= n; i++) 
    { 
    
        while (curr_sum > sum && start < i - 1) 
        { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
  
        if (curr_sum == sum) 
        {  
            cout<< start+1 << " " << i <<endl; break;
        } 
  
        if (i < n) 
        curr_sum = curr_sum + arr[i]; 
    } 
    
    if(curr_sum!=sum)
    cout<<-1<<endl;
    
    
}
return 0;
}
