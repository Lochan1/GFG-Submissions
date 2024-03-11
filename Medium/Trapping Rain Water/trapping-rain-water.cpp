//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        vector<int> left(n);
        vector<int> right(n);
        int prefix=0, suffix=0;
        for(int i=0;i<n;i++){
             prefix = max(prefix,arr[i]);
            suffix = max(suffix,arr[n-i-1]);
            
            left[i] = prefix;
            right[n-i-1] = suffix;
        }
        long long main_ans=0;
        int ans=0;
        for(int i=0;i<n;i++){
            ans=min(left[i],right[i]);
            main_ans+=ans-arr[i];
        }
        return main_ans;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends