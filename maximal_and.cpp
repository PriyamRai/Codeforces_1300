#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pair pair<int,int>
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
        cout<<v[i];
    }
 
}


void solve(){
    int n ,k; cin>>n>>k ; 
    vi v(n) ;input(v) ;
    map<int,int> mp ; 
    for(int i=0;i<n;i++){
        int a = v[i] ;int j =0 ;
        while(a){
            int b = a&1  ;
            if(b==1){
                mp[j]++ ;
            }
            j++ ;
            a=a>>1 ;
        }
    }
    
    ll ans = 0 ;
    for(int i=30;i>=0;i--){
        int need = n-mp[i] ;
        if(need<=k){
            ans+=(1ll<<i) ;
            k-=need ;
        }
    }
    cout<<ans<<endl ;

}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}
//4 3 2 2 1 1 7 0 4 6 6 28 6 6 12 1 30 0 4 4 3 1 3 1 

// 4
// 3 2
// 2 1 1
// 7 0
// 4 6 6 28 6 6 12
// 1 30
// 0
// 4 4
// 3 1 3 1
