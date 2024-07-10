// #include<bits/stdc++.h>
// #define ll long long
// #define ld long double
// #define vi vector<int>
// #define vll vector<long long>
// #define pi pair<int,int>
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
//     cout<<endl ;
// }


// void solve(){
//     ld n,k ; cin>>n>>k ; // n = 1 , k = 1 ;
//     if(n==1){
//         cout<<1<<endl ; 
//         return ;
//     }
//     ld x = (n*(n-1))/(ld)(2) ;
//     if(k<=x){
//         if(k==x){
//             cout<<n-1<<endl ;return ;
//         }
//         ld d1 = sqrt((long double)(8*k)+1) ;
//         ld alpha = (d1-1)/(ld)(2) ;
//         ld a = ceil(alpha) ;
//         ld fa = min(a,2*n-1) ;
//         cout<<fa<<endl ; return ;
//     }else{
//         ld ans = n-1 ;
//         k = k-x ;
//         int sum1 = (n*(n+1))/2 ;
//         if(sum1<=k){
//             cout<<2*n-1<<endl ; return ;
//         }
//         ld alpha = 2*n+1 ;
//         alpha*=alpha ;alpha-=8*k ;
//         ld d1 = sqrt(alpha) ; //d1=3
//         ld d2 = (2*n+1);
//         if(d2<d1){
//             d2+=d1 ;
//             d2=d2/(ld)2 ;
//         }else{
//             d2-=d1 ;
//             d2=d2/(ld)2 ;
//         }
//         ans=ans+ceil(d2) ;
//          //cout<<"ans : "<<ans<<endl ;
//         ld fa = min(ans,2*n-1) ;
//         cout<<fa<<endl ;
//     }
    
// }

// int main()
// {
//    // cout<<ceil(0.37)<<endl ; return 0;
//     int t ;
//     cin>>t ;
//     while(t--){
//         solve() ;

//     }
// }
// //7 4 6 4 7 1 2 3 7 2 5 100 1 1000000000 92345678998765432 
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<long long>
#define pi pair<int, int>
using namespace std;

void input(vi &v) {
    int s = v.size();
    for (int i = 0; i < s; i++) {
        cin >> v[i];
    }
}

void print(vi v) {
    int s = v.size();
    for (int i = 0; i < s; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void solve() {
    ll n, k;
    cin >> n >> k;
    
    if (n == 1) {
        cout << 1 << endl;
        return;
    }
    
    ll x = (n * (n - 1)) / 2;
    if (k <= x) {
        if (k == x) {
            cout << n - 1 << endl;
            return;
        }
        ld d1 = sqrt((long double)(8 * k) + 1);
        ld alpha = (d1 - 1) / 2.0;
        ll a = ceil(alpha);
        ll fa = min(a, 2 * n - 1);
        cout << fa << endl;
        return;
    } else {
        ll ans = n - 1;
        k = k - x;
        ll sum1 = (n * (n + 1)) / 2;
        if (sum1 <= k) {
            cout << 2 * n - 1 << endl;
            return;
        }
        ld alpha = 2 * n + 1;
        alpha *= alpha;
        alpha -= 8 * k;
        ld d1 = sqrt(alpha);
        ld d2 = (2 * n + 1);
        if (d2 < d1) {
            d2 += d1;
            d2 = d2 / 2.0;
        } else {
            d2 -= d1;
            d2 = d2 / 2.0;
        }
        ans = ans + ceil(d2);
        ll fa = min(ans, 2 * n - 1);
        cout << fa << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
