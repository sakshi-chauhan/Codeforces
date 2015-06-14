#include<iostream>
#include<cstring>
using namespace std;

int max( int a , int b ){
    
    return (a>b)?a:b;
        
}

int main(){
    
    int n,a;
    long long dp[100005];
    long long cnt[100005];
    cin>>n;
 
    memset(cnt,0,sizeof(cnt));
    
    for( int i = 0 ; i < n ; i++ ){
         
         cin>>a;     
         cnt[a]++;
         
    }
    
    dp[0] = 0;
    dp[1] = cnt[1];
    
    
    for( int i = 2 ; i <= 100000 ; i++ )
         dp[i] = max( dp[i-1] , (dp[i-2] + (1LL*i*cnt[i])) ); 
         
    //cout<<dp[0]<<" "<<dp[1]<<" "<<dp[2]<<" "<<dp[3];
    
    cout<<dp[100000];
    return 0;
        
}
