#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
#define ll long long
#define kab int kab;cin>>kab;while(kab--)
#define pb push_back
#define wl(i,n) for (int i=0;i<n;i++)
#define miss(i,x,n) for (int i=x;i<n;i++)
#define fo(n,i) for (int i=n-1;i>=0;i--)
#define br cout<<endl
#define vi vector<int>
#define ff first
#define ss second
#define vb vector<bool>
#define vll vector<ll>
#define vvll vector<vll>
#define vs vector<string>
#define msi map<string,int>
#define mint map<int,int>
#define pint pair<int,int>
# define len 1001
int min(int a,int b){return (a<b)?a:b;}
int max(int a,int b){return (a>b)?a:b;}
#define all(x) x.begin(), x.end()
#define mod 1000000007

bool comp(string &a,string &b){
    if(a.size()!=b.size()) return a.size()<b.size();
    else return a<b;
}
void func(){
    string str;
    vector<string> ans;

    unordered_set<string> seen;

    while(cin >> str){
        ans.push_back(str);
        seen.insert(str);
    }
        string s1,s2;

        sort(ans.begin(),ans.end(),comp);

        int sz=ans.size()-1;

        vector<bool> dp(len);

        while(sz>-1){

          string &st = ans[sz--];
          int k = st.size();

          string loca;

        fill(dp.begin(),dp.end(),false);

          for(int i=0; i<k; i++){

            loca="";

            for(int p=0;p<=i;p++){

                if(seen.count(st.substr(p,i-p+1))){

                    if(p==0 && i!=k-1 ){
                        dp[i]=true;
                        break;

                    }
                    else if(p>=1 && dp[p-1]){
                        dp[i]=true;
                        break;

                    }

                }
            }
            }

            if(dp[k-1]==true){

                if(s1.empty()==true) s1=st;

                else if(s2.empty()==true) s2=st;

                else break;
          }

        }

        cout<<"Longest compound word : " << s1 << "\n";

        cout<<"Second longest compound word : " << s2;

}

int main()
{   ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    auto begin = high_resolution_clock::now();

    kab{

        func();

        cout << "\n";
    }

   auto end = high_resolution_clock::now();

   auto dur = duration_cast <milliseconds> (end - begin);

   cout<<"Time taken to process input file : "<< dur.count() << " milliseconds";
}
