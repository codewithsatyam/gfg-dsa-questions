
#include<bits/stdc++.h> 
using namespace std; 

 //main solution starts from here
class Solution{   
public:
    int multiplication(int A, int B){
        int ans=1;
        ans=A*B;
        
    return ans;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.multiplication(A,B) << endl;
    }
    return 0; 
} 
  
