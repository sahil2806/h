// #include <bits/stdc++.h>
// using namespace std;
// #include <cmath>
// #define ll long long int
// #define inf  1e17
// #define dl  long double
// #define MOD 998244353
// using namespace std;
// #define debug(x) cout << #x << " ---> " << x << endl;
// const unsigned long long  N = 1e6+1;
// const unsigned int mod = 1e9+7;
// //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
// bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
// ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
// ll moduloinverseprime(ll a, ll b) {return expo(a, b - 2, b);}
// ll moduloaddition(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
// ll modulomultiply(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
// ll modulosubstraction(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
// ll modulodivison(ll a, ll b, ll m) {a = a % m; b = b % m; return (modulomultiply(a, moduloinverseprime(b, m), m) + m) % m;}  //only for prime m
// bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
bool customSort(const pair<char, ll> &a, const pair<char, ll> &b) {
    // Sort in ascending order of the first element
    if (a.first < b.first) {
        return true;
     } 
    //    else if (a.first == b.first) {
    //     // If the first elements are equal, sort in descending order of the second element
    //     return a.second > b.second;
    // }
    // return false;
}


// bool custom(const pair<char, int> &a, const pair<char, int> &b) {
//     // Sort in ascending order of the first element
//     if (a.second > b.second) {
//         return true;
//      } 
//     //    else if (a.first == b.first) {
//     //     // If the first elements are equal, sort in descending order of the second element
//     //     return a.second > b.second;
//     // }
//     // return false;
// }

// good segment technique for tp
// only for posituve numbers
// int i=0;
// int j=0;
// ll sum=0;
// int ans=0;
// while(j<n)
// { 
//     sum+=arr[j];
//     while(i<=n && sum>k){
//       sum-=a[i];
//        i++;
//     }
//     ans=max(ans,j-i+1);
//     j++;
// }

// vector<ll>fac(N,0);

// void fun()
// {
//     fac[0]=1;
//     for(ll i=1;i<N;i++){
//       fac[i]=(i%mod*fac[i-1]%mod)%mod; 
//     }
// }


// ll n,k; cin >> n >> k;
//       vector<ll>v(n);
//       for(int i=0;i<n;i++){
//           cin >> v[i];
//       }

//       int mxsum = 0;
     
//       for(int i=0;i<k;i++){
//          mxsum+=v[i];
//       }

//       int sum=mxsum;

//       for(int end=k;end<n;end++){
//          int old_start=end-k;
//          // adding a new value
//          sum+=v[end];
//          // removing a old value from starting
//          sum-=v[old_start];

//          mxsum=max(mxsum,sum);
//       }

//       cout << mxsum << endl;

// ll n,k; cin >> n >> k;
//       vector<ll>v(n);
//       for(int i=0;i<n;i++){
//           cin >> v[i];
//       }
//       int mxsum=0;
//       int sum=0;
//       for(int idx=0;idx<n;i++){
//          int new_end=idx;
//          int old_end=idx-k;
         
//          // adding a  new element to the window 
//          sum+=v[new_end];

//          // remove the old element from the window if the size > k
//          if(old_end>=0){
//            sum-=v[old_end];
//          }

//          // update the maximum sum if the window size >=k
//          if(new_end>=k-1){
//             mxsum=max(mxsum,sum);
//          }
//       }  50 min se start 

 
 
 
#include <bits/stdc++.h>
using namespace std;
#include <cmath>
#define ll long long int
#define inf  1e17
#define double long double
#define MOD 1000000007
using namespace std;
#define debug(x) cout << #x << " ---> " << x << endl;
const unsigned long long  N = 1e6+1;
const unsigned int mod =  1e9+7;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll moduloinverseprime(ll a, ll b) {return expo(a, b - 2, b);}
ll moduloaddition(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll modulomultiply(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll modulosubstraction(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll modulodivison(ll a, ll b, ll m) {a = a % m; b = b % m; return (modulomultiply(a, moduloinverseprime(b, m), m) + m) % m;}  //only for prime m

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.first > b.first);}


vector<ll>fac(N,0);

void fun()
{
    fac[0]=1;
    for(ll i=1;i<N;i++){
      fac[i]=i*fac[i-1]%mod; 
    }
}

int main()
{  
    ll t; cin >> t;
    while(t--){
         
         ll n,k; cin >> n >> k;
         vector<ll>v(n);
         vector<bool> visited(k+1,false);
         for(int i=0;i<n;i++){
             cin >> v[i];
             visited[v[i]] = true;
         }

         vector<ll>pre(n,0);
         vector<ll>suf(n,0);
         pre[0]=v[0];
         for(int i=1;i<n;i++){
            pre[i]=max(pre[i-1],v[i]);
         }
         suf[n-1]=v[n-1];
         for(int i=n-2;i>=0;i--){
             suf[i]=max(suf[i+1],v[i]);
         }

         for(int i=0;i<n;i++){
              cout << pre[i] << " ";
         }
         cout << endl;

         for(int i=0;i<n;i++){
              cout << suf[i] << " ";
         }
         cout << endl;
          reverse(suf.begin(),suf.end());

         for(int i=1;i<=k;i++){

              if(!visited[i]){
                  cout << 0 << " ";
                  continue;
              }

              ll low = lower_bound(pre.begin(), pre.end(),i)-pre.begin();
               
              ll high =  lower_bound(suf.begin(),suf.end(),i)-suf.begin();
              high=n-1-high;
               

              // debug(low)
              // debug(high)
              
              

              cout << (high-low+1)*2 <<  " ";
         }
         cout << endl;






    }
 

}

 






 

 