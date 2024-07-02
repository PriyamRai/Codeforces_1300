#include<bits/stdc++.h>
#define ll long long
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

//111351211641 
void solve(){
    int n ; cin>>n ; 
    vector<int> v(n) ; 
    input(v) ; 
    int ans=INT_MAX,currlength =1 ; int k =v[0] ;
    for(int i=1;i<n;i++){
        if(v[i]==k){
            currlength++ ;
        }else{
            if(currlength){
                ans=min(ans,currlength) ; 
            }
            
            currlength=0 ;
        }
    }
    ans = min(ans,currlength) ;
    if(ans==n){
        cout<<-1<<"\n" ; 
        return ;
    }

    cout<<ans<<endl ; 
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
// 4 3 2 2 2 5 1 2 1 2 1 1 1 7 3 3 3 5 3 3 3
