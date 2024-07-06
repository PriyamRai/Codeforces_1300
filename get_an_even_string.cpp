#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int,int>

using namespace std;

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
    string s ; cin>>s ; 
    int n=s.size() ;
    int ans=0 ;
    vector<bool> visited(26,false) ;int p=0 ;
    for(int i=0;i<n;i++){
        if(visited[s[i]-'a']){
            p+=2 ;
            for(int j=0;j<26;j++){
                visited[j]  =false ;
            }
        }else{
            visited[s[i]-'a'] = true ;
        }
        
    }
    cout<<n-p<<endl ;
}

int main()
{
    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }

    return 0 ;
}
//6 aabbdabdccc zyx aaababbb aabbcc oaoaaaoo bmefbmuyw 