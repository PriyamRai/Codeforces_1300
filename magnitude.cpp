#include<bits/stdc++.h>
#define int long long
#define vi vector<int>
using namespace std ;

void input(vi &v){
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cin>>v[i] ;
    }
}


void print(vi v){ 
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cout<<v[i];
    }
 cout<<endl ;
}


void solve(){
    int n ; cin>>n ; 
    vi v(n) ; 
    input(v) ;
    int c = 0 ; 
    int mn = 0 ;
    for(int i=0;i<n;i++){
        c+=v[i] ; 
        mn = min(mn,c) ;
        
    }
    c=c-2*mn ;
    cout<<c<<"\n" ; return ;
}


int32_t main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}

//6 4 10 -9 -3 4 8 1 4 3 4 1 4 3 4 3 -1 -2 -3 4 -1000000000 1000000000 1000000000 1000000000 4 1 9 8 4 30 -1 -1 -1 0 1 -1 -1 0 1 1 -1 1 1 0 0 -1 0 1 1 1 1 -1 1 -1 -1 -1 -1 0 0 -1