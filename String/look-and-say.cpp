//Problem Statement: https://practice.geeksforgeeks.org/problems/decode-the-pattern1138/1#

// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string lookandsay(int n) {
        // code here
       if(n==0) return "";
        
     string result= "1";
        
      while(--n){
          string t="";
          
          for(int i=0;i<result.size();i++){
              int c=1;
              
              while(i+1<result.size() && result[i]==result[i+1]){
                  c++;
                  i++;
              }
              
              t=t+to_string(c)+result[i];
          }
          result=t;
      }  
        return result;
    }   
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code Ends