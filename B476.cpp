//Codeforces 476B
//Sakshi Chauhan

#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){
    
    string str1,str2;
    int num,count,pos1,pos2;
    float res;
    
    pos1 = 0;
    count = 0;    
    num = 0;
    pos2 = 0;
    
    cin>>str1;
    cin>>str2;
    
    for( int i = 0 ; i < str1.size() ; i++ ){
         
         if( str1[i] == '+' )
             pos1++;
         else
             pos1--;
                      
    }
    
    for( int i = 0 ; i < str2.size() ; i++ ){
         
         if( str2[i] == '+' )
             pos2++;
         else if( str2[i] == '-' )
             pos2--;
         else
             num++;
                          
    }
    
    if( (pos1 == pos2) && (num == 0) ){
        
            cout<<"1.000000000000"; 
    }
    
    else{
         
        if( num%2 ){
            
            if( pos2 + 3 == pos1 )
                count++;
            if( pos2 - 3 == pos1 )
                count++;
            if( pos2 + 1 == pos1 )
                count++;
            if( pos2 - 1 == pos1 )
                count++;            
            
        }
        
        else{
             
            if( pos2 + 2 == pos1 )
                count++;
            if( pos2 - 2 == pos1 )
                count++;
            if( pos2 + 0 == pos1 )
                count+=2;            
             
        }    
        //cout<<num<<"   "<<count;
        res = (float)count;
        res /= (float)pow(2,num);
        
        cout<<setprecision(12)<<fixed<<res;
    }
    
    return 0;
        
}
