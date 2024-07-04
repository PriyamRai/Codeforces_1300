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
        cout<<v[i]<<" ";
    }
    cout<<endl ;
}


void solve(){
    int n ; cin>>n ; 
    vi v(n) ; input(v) ;
    vi v1,v2;
    for(int i=1;i<=n;i++){
        if(v[i-1]<i){
            v1.push_back(v[i-1]) ;
            v2.push_back(i) ;
        }
    }
    // print(v1) ; 
    // print(v2) ;
   /* ll ans = 0 ;
    for(int i=0;i<v1.size();i++){
        int t = v1[i] ; ll p = v1.size() ;
        int l=0,r=v1.size()-1 ;
        while(l<=r){
            int mid = l+(r-l)/2 ;
            if(v2[mid]>t){
                p=mid;r=mid-1 ;
            }else{
                l=mid+1 ;
            }
        }
        
        ans+=p ;
        
    }*/
    ll ans = 0;
for(int i = 0; i < v1.size(); i++) {
    int t = v1[i];
    ll p = v2.size();  // should be v2.size() instead of v1.size()
    int l = 0, r = v2.size() - 1; // should be v2.size() instead of v1.size()
    
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(v2[mid] > t) {
            p = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    
    ans += (p-1);
}

    
    cout<<ans<<endl  ;
    return ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}


