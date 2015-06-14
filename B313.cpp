//Codeforces 313B
//Sakshi Chauhan

#include<iostream>

using namespace std;

int main(){
    
    string str;
    int m,l,r,count;
    
    cin>>str;
    cin>>m;
    
    for( int i = 0 ; i < m ; i++ ){
         
         cin>>l>>r;
         count = 0 ;
         
         for( int j = l-1 ; j <= r-2 ; j++ )
              if( str[j] == str[j+1] )
                  count++;
                  
         cout<<count<<"\n";         
         
    }
    
    return 0;
        
}
