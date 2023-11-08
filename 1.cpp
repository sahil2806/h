#include<bits/stdc++.h>  // Header
#pragma GCC optimize("O3,unroll-loops")
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std::chrono;
using namespace std; // std is v namespace
using namespace chrono;
// using namespace __gnu_pbds;
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define boolalpha std::cout << std::boolalpha;
#pragma GCC optimize("Ofast")

// constants
const unsigned int M = 1e9+7;
const long double pi= 3.141592653589793238;


//type defines
typedef long long int ll;
typedef long double lld;
typedef std::vector<ll> vll;
typedef std::unordered_map<ll, ll> umll;
typedef std::map<ll, ll> mll;
typedef unordered_map<char, ll> umcll;
typedef std::map<char, ll> mcll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef unordered_map<string , ll> umsll;
typedef std::map<string , ll> msll;
typedef pair<string,ll> psll;
typedef vector<psll> vpsll;
typedef vector<vector<ll>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<char> vc;



// macros
#define endl '\n'
#define sz(x) ((int)(x).size())
#define debug(x) cout << #x << " ---> " << x << endl;
#define pb push_back
#define pop pop_back
#define forf(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i>=b; i--)
#define cyes cout << "YES" << endl
#define cno cout << "NO" << endl
#define cmo cout << -1 << endl
#define c(demoralizer) cout << (demoralizer ? "YES" : "NO") << endl
#define vsorta(v) sort(v.begin(),v.end())
#define vsortd(v) sort(v.begin(),v.end(),greater<int>())
#define vreverse(v) reverse(v.begin(),v.end())
#define vminimum_Element(v) *min_element(v.begin(), v.end());
#define vmaximum_Element(v) *max_element(v.begin(), v.end());
#define vminimum_Element_Index(v) min_element(v.begin(), v.end()) - v.begin()
#define vmaximum_Element_Index(v) max_element(v.begin(),v.end()) - v.begin()
#define vsum(v) accumulate(v.begin(), v.end(), 0*1LL)
#define vcount_Frequency(v,x) count(v.begin(), v.end(), x)
#define vfind(v,x) find(v.begin(), v.end(), x)
#define verase(v,i) v.erase(v.begin() + i)
#define setbits(x) __builtin_popcountll(x)
#define vpfsorta(v) sort(v.begin(),v.end())
#define vpfsorta(v) sort(v.begin(),v.end())
#define vpssorta(v) sort(v.begin(),v.end(),sorta)

// modulo functions
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll moduloinverseprime(ll a, ll b) {return expo(a, b - 2, b);}
ll moduloaddition(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll modulomultiply(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll modulosubstraction(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll modulodivison(ll a, ll b, ll m) {a = a % m; b = b % m; return (modulomultiply(a, moduloinverseprime(b, m), m) + m) % m;}  //only for prime m


// #define vpssorta(v) sort(v.begin(),v.end(),sortd)
// operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

template <typename T, typename S> // cout << map<T1, T2>
ostream& operator<<(ostream& os, const map<T, S>& v){for (auto it : v)os << it.first << " : "<< it.second << "\n";return os;}
// checks
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(ll n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
bool isEven(ll n){if(n%2==0 && n!=0) return true;return false;}


bool isOdd(ll n){if(n%2==0) return false;return true;}


// utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
// sort according to the second element of the pair v is for ascending and d is for descending.
// check last line of the code to get an idea.
bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}


bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}
// bits converter decimal to binary and binary to decimal.
string decimalToBinary(ll n){string s="";ll i = 0;while (n > 0) {s =to_string(n % 2)+s;n = n / 2;i++;}return s;}

ll binaryToDecimal(string n){string num = n;ll dec_value = 0;int base = 1;int len = num.length();for(int i = len - 1; i >= 0; i--){if (num[i] == '1')dec_value += base;base = base * 2;}return dec_value;}


// check pal
bool check_Palindrome(string s, int i, int j){if (i>=j)return true;if (s[i]!=s[j])return false;else return check_Palindrome(s,i+1,j-1);}
ll gcd(ll a, ll b){if(a==0ll) {return b;} return gcd(b%a,a);}
ll lcm(ll a, ll b){return (a*b)/(gcd(a,b));}
ll binary_Exponentiation(ll a, ll b){ll z=1;while(b){if(b%2) z=z*a;a=a*a;b=b/2;}return z;}
ll logab(ll a,ll b){ll ans=log2(b)/log2(a);return ans;}

ll logdivisors(ll n,ll i){ll count=0;while(n%i==0){count++;n=n/i;}return count;}

ll binarySearch(vector<ll>arr, ll low, ll high, ll target){while (low <= high) {     ll mid = low + (high - low) / 2;if (arr[mid] == target)return mid;if (arr[mid] < target)low = mid + 1;else high = mid - 1; }return -1;}
ll catalan_numbers(ll n){ll dp[n+1];dp[0]=1;dp[1]=1;for (int i = 2; i < n+1; ++i) {dp[i]=0;for (int j = 0; j < i; ++j) {dp[i]+=dp[j]*dp[i-j-1];}}return dp[n];}
ll count_Binary_Inversions(vector<ll>&a){ll ans=0,count=0;for (int i = 0; i < a.size(); ++i) {if (a[i]==1) count++;else ans+=count;}return  ans;}

void leftrotate_String(string &s, ll d){reverse(s.begin(), s.begin()+d);reverse(s.begin()+d, s.end());reverse(s.begin(), s.end());}
// In-place rotates s towards right by d
void rightrotate_String(string &s, ll d){leftrotate_String(s, s.length()-d);}

ll get_String_Hash(string s){ll value=0;ll power=31;ll power_value=1;for(char ch: s){value=(value+(ch-'a'+1)*power_value)%M;power_value=(power_value*power)%M;}return value;}
ll mod_exponentiation(ll a, ll b){ll result=1;if (b==0)return 1;if (b%2==0)return result*mod_exponentiation(a,b/2)* mod_exponentiation(a,b/2);else return result* mod_exponentiation(a,b/2)* mod_exponentiation(a,b/2)*a;}

bool customComparator_first_element_ASC_second_element_DESC(pair<int, int> a, pair<int, int> b) {
    // example- {1,4}, {1,2}, {2,3}, {3,5}, {3,4}, {3,4}

    if (a.first != b.first) {
        return a.first < b.first;  // Sort in ascending order by first element
    } else {
        return a.second > b.second;  // Sort in descending order by second element
    }
}
bool have_same_set_bits_at_same_place(ll a, ll b){return (a^b==0);}
float in_Radians(float degrees){return (degrees*3.14)/180;}

 

struct hashing{
    string s;
    int n;
    int primes;
    vector<ll> hashPrimes = {1000000009, 100000007};
    const ll base = 31;
    vector<vector<ll>> hashValues;
    vector<vector<ll>> powersOfBase;
    hashing(string a){
        primes = sz(hashPrimes);
        hashValues.resize(primes);
        powersOfBase.resize(primes);
        s = a;
        n = s.length();
        for(int i = 0; i < sz(hashPrimes); i++) {
            powersOfBase[i].resize(n + 1);
            powersOfBase[i][0] = 1;
            for(int j = 1; j <= n; j++){
                powersOfBase[i][j] = (base * powersOfBase[i][j - 1]) % hashPrimes[i];
            }
        }
        for(int i = 0; i < sz(hashPrimes); i++) {
            hashValues[i].resize(n);
            for(int j = 0; j < n; j++){
                hashValues[i][j] = ((s[j] - 'a' + 1LL) * powersOfBase[i][j]) % hashPrimes[i];
                hashValues[i][j] = (hashValues[i][j] + (j > 0 ? hashValues[i][j - 1] : 0LL)) % hashPrimes[i];
            }
        }
    }
    void addCharacter(char ch){
        s += ch;
        n = sz(s);
        for(int i = 0; i < sz(hashPrimes); i++){
            while(sz(powersOfBase[i]) < sz(s)){
                powersOfBase[i].pb((powersOfBase[i].back() * base) % hashPrimes[i]);
            }
        }
        for(int i = 0; i < sz(hashPrimes); i++){
            while(sz(hashValues[i]) < sz(s)){
                if(sz(hashValues[i]) == 0){
                    hashValues[i].pb((s[0] - 'a' + 1LL) % hashPrimes[i]);
                }else{
                    ll extraHash = hashValues[i].back() + ((s.back() - 'a' + 1LL) * powersOfBase[i][sz(s) - 1]) % hashPrimes[i];
                    hashValues[i].pb((extraHash + hashPrimes[i]) % hashPrimes[i]);
                }
            }
        }
    }
    vector<ll> substringHash(int l, int r){ // extra O(log) factor
        vector<ll> hash(primes);
        for(int i = 0; i < primes; i++){
            ll val1 = hashValues[i][r];
            ll val2 = l > 0 ? hashValues[i][l - 1] : 0LL;
            hash[i] = modulomultiply(modulosubstraction(val1, val2, hashPrimes[i]), moduloinverseprime(powersOfBase[i][l], hashPrimes[i]), hashPrimes[i]);
        }
        return hash;
    }
    bool compareSubstrings(int l1, int r1, int l2, int r2){ // use this for comparing strings faster
        if(l1 > l2){
            swap(l1, l2);
            swap(r1, r2);
        }
        for(int i = 0; i < primes; i++){
            ll val1 = modulosubstraction(hashValues[i][r1], (l1 > 0 ? hashValues[i][l1 - 1] : 0LL), hashPrimes[i]);
            ll val2 = modulosubstraction(hashValues[i][r2], (l2 > 0 ? hashValues[i][l2 - 1] : 0LL), hashPrimes[i]);
            if(modulomultiply(val1, powersOfBase[i][l2 - l1], hashPrimes[i]) != val2)
                return false;
        }
        return true;
    }
};

pair<const ll, const ll> mod={1e9+7,1e9+9};

pair<ll, ll> gethash(string s)
{
    int n=s.size();
    pair<int,int> h={0,0};
    for(int i=0; i<n; i++)
    {
        h.first=(h.first*31+(s[i]-'a'+1))%mod.first;
        h.second=(h.second*53+(s[i]-'a'+1))%mod.second;
    }
    return h;
}

 
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
void solve() {
    






      

}

int32_t main()
{
    fastio;
    cout<<fixed<<setprecision(10);
#ifdef Saumya
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
#endif
    auto start = high_resolution_clock::now();
//    int t;
//    cin>>t;
//    int i=1;
//    while(i<=t)
//    {
//        //cout<<"Case #"<<i<<": ";
        solve();
//        i++;
//    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
#ifdef Saumya
    cout<<endl<<"Time: "<< (float)duration.count()/1000000<<" s"<<endl;
#endif
}


// size_t = unsigned long long int in c++ ;