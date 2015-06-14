#include<iostream>

using namespace std;

int max( int a , int b ){
    
    return (a>b)?a:b;
        
}

int main(){
    
    int n,a,s=0;
    int* arr;
    int max_so_far,curr_max;
    cin>>n;
    
    arr = new int[n];
    
    cin>>a;     
    if( a == 0 )
        arr[0] = 1;
    else if( a == 1 ){
         arr[0] = -1;
         s++;
    }
    curr_max = arr[0];
    max_so_far = arr[0];
    
    for( int i = 1 ; i < n ; i++ ){
         
         cin>>a;     
         if( a == 0 )
             arr[i] = 1;
         else if( a == 1 ){
             arr[i] = -1;
             s++;    
         }
         
         curr_max = max( arr[i] , arr[i] + curr_max );
         max_so_far = max( max_so_far , curr_max );
                  
    }
    
    std::cout<<s+max_so_far;
    
    return 0;
        
}
