#include<bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int,int>
using namespace std ;

void input(vi &v){
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cin>>v[i] ;
    }
}


void print(vi &v){ 
    int s=v.size() ;
    for(int i=0;i<s;i++){
        std::cout<<v[i]<<" " ;
    }
    std::cout<<endl ;
}


void solve(){
    int n,m,k ; cin>>n>>m>>k ; 
    vi v(n) ; input(v) ;
    sort(v.begin(),v.end()) ;
    int increased_by=0 ,ans=0 ; int w = 1 ;
    for(int i=0;i<n&&k>0;i++){
        ans=ans+(v[i]+increased_by)*min(m,k) ;
       increased_by+=min(m,k) ; k-=m;
        
    }
    std::cout<<ans<<endl ;
    
}


int32_t main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}

/*

8 4 2 3 8 6 4 2 4 2 8 8 6 4 2 5 100 1 10000 1 100 10 1000 6 3 9 5 5 5 5 5 5 3 13 26 360314077 804706468 360314077 2 9 2 394122399 394122399 3 4 8 936849271 104075508 427171372 3 8 20 939006130 939006130 331197969

*/