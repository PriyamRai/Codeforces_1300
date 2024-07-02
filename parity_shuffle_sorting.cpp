#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define vi vector<int>
using namespace std;

void input(vi &v){
    int s = v.size();
    for(int i = 0; i < s; i++){
        cin >> v[i];
    }
}

void print(vi v){ 
    int s = v.size();
    for(int i = 0; i < s; i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve(){
    int n; 
    cin >> n;
    vector<ll> v(n);
    vector<pair<ll,ll>> ans ;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    if(n==1){
        cout<<0<<endl ; return ;
    }

    ans.pb({1,n}) ;
    for(int i=1;i<=n-2;i++){
        ll x = v[i]+v[0] ;
       // cout<<x<<" " ;
        if(x%2ll){
            ans.pb({1,i+1}) ;
        }else{
            ans.pb({i+1,n}) ;
        }
    }



    cout<< ans.size() << endl;
    for(auto s : ans){
        cout << s.first << " " << s.second << endl;
    }
    return;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}


// #include<bits/stdc++.h>
// #define ll long long
// #define vi vector<int>
// using namespace std ;

// void input(vi &v){
//     int s=v.size() ;
//     for(int i=0;i<s;i++){
//         cin>>v[i] ;
//     }
// }


// void print(vi v){ 
//     int s=v.size() ;
//     for(int i=0;i<s;i++){
//         cout<<v[i]<<" ";
//     }
//  cout<<endl ;
// }


// void solve(){
//     int n ; cin>>n ;
//     vi v(n) ;
//     vi even,odd ;
//     for(int i=0;i<n;i++){
//         cin>>v[i] ; 
//         if(v[i]%2){
//             odd.push_back(i) ;
//         }else{
//             even.push_back(i) ;
//         }
//     }
//     if(n==1){
//         cout<<0<<endl ; 
//         return ;
//     }else if(n==2){
//         cout<<1<<endl ; 
//         cout<<1<<" "<<2<<endl ; 
//         return ;
//     }
//     vector<pair<int,int>> ans ;

//     for(int i=odd.size()-2;i>=0;i--){
//         ans.push_back({odd[i]+1,odd[i+1]+1}) ;
//         //cout<<odd[i]+1<<" "<<odd[i+1]+1<<endl ;
//     }
//     int j= 0 ; 
//     while(even[j]<odd[0]){
//         j++ ;
//     }
//     int k = j,l=j ;
//     while(j<even.size()){
//         ans.push_back({odd[0]+1,even[j]+1}) ;
//         //cout<<odd[0]+1<<" "<<even[j]+1<<endl ;
//         j++ ;
//     }
//     if(k!=0){
//         k-- ;
//         if(k!=0){
//            for(int a=k-1;a>=0;a--){
//                ans.push_back({even[a]+1,even[a+1]+1}) ;
//                //cout<<even[a]+1<<" "<<even[a+1]+1<<"\n" ;
//             } 
//         }
        
//     }
//     if(l!=0){
//         for(int w=0;w<odd.size();w++){
//             ans.push_back({even[l]+1,odd[w]+1}) ;
//            // cout<<even[l]+1<<" "<<odd[w]+1<<endl ;
//         }
//     }
//     cout<<ans.size()<<endl ;
//     for(auto s:ans){
//         cout<<s.first<<" "<<s.second<<endl ;
//     }
//     return ;
    
// }

// int main()
// {
//     int t ;
//     cin>>t ;
//     while(t--){
//         solve() ;

//     }
// }