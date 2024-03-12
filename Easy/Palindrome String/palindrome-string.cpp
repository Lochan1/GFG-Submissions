//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
   bool pali(string &p,int s,int e){
       if(p[s]!=p[e]) return 0;
       if(s>=e) return 1;
       pali(p,s+1,e-1);
   }
   
	int isPalindrome(string S)
	{   
	    int e=S.size()-1;
	    
	    pali(S,0,e);
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends