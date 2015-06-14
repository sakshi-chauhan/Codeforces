//Codeforces 489B
//Sakshi Chauhan

#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    
    int n,m,count = 0;    
    int* boys;
    int* girls;
    
    cin>>n;
    boys = new int[n];
    
    for( int i = 0 ; i < n ; i++ )
         cin>>boys[i];
    
    cin>>m;
    girls = new int[m];
    
    for( int i = 0 ; i < m ; i++ )
         cin>>girls[i];
    
    sort(boys,boys+n);
    sort(girls,girls+m);
    
    for( int i = 0 ; i < n ; i++ )
         for( int j = 0 ; j < m ; j++ )
              if( abs( boys[i] - girls[j] ) <= 1 ){
                  
                  girls[j] = 1000;
                  count++;    
                  break;
              }
    
    cout<<count;
    return 0;
    
}
