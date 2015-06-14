//Codeforces 337A
//Sakshi Chauhan

#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<climits>
#include<stdio.h>
#define gc getchar_unlocked
#define pc putchar_unlocked
 
int scan(){
	int n=0;
	char ch;
	ch=gc();
	while(ch<'0' || ch >'9')
		ch=gc();
	while(ch>='0' && ch<='9'){
		n=n*10+ch-'0';
		ch=gc();
	}
		return n;
}

int print(int n){
	int i=0;
	char ch[6]={-1};
	while(n>0){
		ch[i++]='0'+n%10;
		n=n/10;
	}
	while(i-->0){
		pc(ch[i]);
	}
}

int min( int a , int b ){
    
    return a<b?a:b;    
    
}

int main(){
    
    int n,m;
    int* f;
    
    //std::cin>>n>>m;
    n = scan();
    m = scan();
    f = (int*)malloc(m*sizeof(int));
    for( int i = 0 ; i < m ; i++ )
         //std::cin>>f[i];
         f[i] = scan();
    
    std::sort(f,f+m);  
    
    int mn = INT_MAX;
    for( int i = 0 ; i <= m-n ; i++ )    
         mn = min( mn, f[i+n-1]-f[i] );

    //std::cout<<mn;     
    print(mn);
    
    return 0;
        
}
