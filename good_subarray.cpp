#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
using namespace std ;

void input(vi &v){
    int s=v.size() ;
    for(int i=1;i<s;i++){
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
    vi v(n+1) ;

    input(v) ;
    int ans = 0 ;int r=1 ;
    for(int i=1;i<=n;i++){
        while(r<=n&&v[r]>=r-i+1){
            r++ ;
        }
        ans+=(r-i) ;
    }
    
    cout<<ans<<" " ;
    
    
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}
//36 5 1 1 1 1 1 5 2 1 1 1 1 5 3 1 1 1 1 5 4 1 1 1 1 5 5 1 1 1 1 5 1 2 1 1 1 5 2 2 1 1 1 5 3 2 1 1 1 5 4 2 1 1 1 5 5 2 1 1 1 5 1 3 1 1 1 5 2 3 1 1 1 5 3 3 1 1 1 5 4 3 1 1 1 5 5 3 1 1 1 5 1 4 1 1 1 5 2 4 1 1 1 5 3 4 1 1 1 5 4 4 1 1 1 5 5 4 1 1 1 5 1 5 1 1 1 5 2 5 1 1 1 5 3 5 1 1 1 5 4 5 1 1 1 5 5 5 1 1 1 5 1 1 2 1 1 5 2 1 2 1 1 5 3 1 2 1 1 5 4 1 2 1 1 5 5 1 2 1 1 5 1 2 2 1 1 5 2 2 2 1 1 5 3 2 2 1 1 5 4 2 2 1 1 5 5 2 2 1 1 5 1 3 2 1 1 
//5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 7 7 7 7 7 7 7 7 7 7 7 7 7 7 7 
//5 5 5 5 5 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6 6