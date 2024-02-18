//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include<map>
#include<algorithm>
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
     map<int,int> mp;
     for(int i = 0; i < N; ++i){
         mp[arr[i]]++;
     }
     int currentlenght=0;
     int longestlenght=0;
     
     int previous=INT_MIN;
     
     for(auto it:mp){
         if(it.first==previous+1) currentlenght++;
         else currentlenght=1;
         longestlenght=max(longestlenght,currentlenght);
         previous=it.first;
     }
     return longestlenght;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends