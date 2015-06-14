//Codeforces 189A
//Sakshi Chauhan

#include<iostream>
#include<climits>
using namespace std;

int main(){
    
    int n,a;
    int dp[4002];
    
    cin>>n;
    fill(dp+1,dp+4002,INT_MIN);
    for( int i = 0 ; i < 3 ; i++ ){
         
         cin>>a;
         
         for( int j = a ; j <= n ; j++ )
              dp[j] = max( dp[j-a]+1 , dp[j] );
         
    }    
    cout<<dp[n];
    return 0;
        
}
