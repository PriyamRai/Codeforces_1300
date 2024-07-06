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


void print(vi v){ 
    int s=v.size() ;
    for(int i=0;i<s;i++){
        cout<<v[i];
    }
 cout<<endl ;
}


void solve(){

    int n ; cin>>n ; 
    vi v(n) ; input(v) ;
    for(int i=0;i<n;i++){
        
        if(v[i]==0){
            cout<<0<<" " ; continue ;
        }

        if(v[i]%32768==0){
            cout<<1<<" " ;continue;
        }

        

        int ans = 15;

        for(int j=0;j<=15;j++){
            for(int k=0;k<15;k++){
                if(((v[i]+k)<<j)%32768==0){
                    ans=min(ans,k+j) ;
                }
            }
            
            
        }

        cout<<ans<<" " ;
    }
    
}

int main()
{
    int t =1 ;
   
    while(t--){
        solve() ;

    }
}