#include<bits/stdc++.h>
#define ll long long
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
        cout<<v[i]<<" " ;
    }
    cout<<endl ;
}


void solve(){
    int n  ;cin>>n ; string s ; cin>>s ;
    if(n==2){
        int a = stoi(s) ;
        cout<<a<<endl ; return ;
    }else if(n==3){
        string s1 = s.substr(0,1),s2=s.substr(1,2),s3=s.substr(0,2),s4=s.substr(2,1) ; //901  9 01 90 1
        int a = stoi(s1),b=stoi(s2),c=stoi(s3),d=stoi(s4) ;
        int ans = min({a+b,a*b,c+d,c*d}) ;
        cout<<ans<<endl ;return ;

    }

    bool haszero=false,hasone=0 ; 
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            haszero = true ;
        }
    }

    if(haszero){
        cout<<0<<endl ; return ;
    }

    int ans = INT_MAX ;
    for(int i=0;i<n-1;i++){
        int sum= 0 ;
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=stoi(s.substr(i,2)) ;j++ ;
            }else{
                if(s[j]!='1'){
                    sum+=(s[j]-'0') ;
                }
            }
        }
        ans=min(sum,ans) ;
    }
    cout<<ans<<"\n" ; 
    
    

}

int main()
{

    int t ;
    cin>>t ;
    while(t--){
        solve() ;

    }
}
/*
18 2 10 2 74 2 00 2 01 3 901 3 101 5 23311 6 987009 7 1111111 20 99999999999999999999 20 00000000000000000000 4 0212 18 057235283621345395 4 1112 20 19811678487321784121 4 1121 4 2221 3 011 
*/