#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPal(string s)
{
    ll l = 0, r = s.length()-1;

    while(l<=r)
    {
        if(s[l]!=s[r])return false;
        l++;
        r--;
    }

    return true;
}

void solve(){
    string s;
    cin>>s;

    unordered_map<char,int> hash;
    for(auto i:s){
        hash[i]++;
    }
    int oddCount = 0;
    for (auto it : hash) {
        if (it.second % 2 != 0) {
            oddCount++;
            
        }
    }
    if (oddCount > 1) {
        cout << "NO SOLUTION\n";
        return;
    }
    string res = "";
    vector<char> odd;
    for(auto it : hash){
        if(it.second%2!=0 && it.second==1){
            odd.push_back(it.first);
        }else if(it.second%2 ==0) {
            int d = it.second/2;
            int i = 0;
            while(i<d){
                res+=it.first;
                i++;
            }
        }else if(it.second%2!=0 && it.second>1){
            int n = it.second/2;
            int i=0;
            while(i<n)
            {
                res+=it.first;
                i++;
            }
            odd.push_back(it.first);
        }
    }

    string second_half = res;
    reverse(second_half.begin(),second_half.end());
    for(auto it:odd){
        res+=it;
    }

    string ans = res+second_half;
    cout<<ans<<endl;


}


int main(){
    solve();
    return 0;
}