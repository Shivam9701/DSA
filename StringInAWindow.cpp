#include<bits/stdc++.h>
using namespace std;
int main(){
    string a = "ADOBECODEBANC";
    string b = "ABC";

    unordered_map <char,int> ua;
    unordered_map <char,int> ub;

    for (int i = 0; i <b.length(); i++){
        ub[b[i]]++;
    }

    int i=0,cnt=0,start=0,min_len=INT_MAX,fstart=0;

    while (i<a.length()){
        ua[a[i]]++;

        if (ub[a[i]] && ua[a[i]]<=ub[a[i]]){
            cnt++;  
        }
        if (cnt==b.size()){

            while (!ub[a[start]] || ua[a[start]]>ub[a[start]]){
                ua[a[start]]--;
                start++;       
            }
            if (min_len>i-start+1){
                min_len =i-start+1;
                fstart=start;
            }
        }
        i++;

    }
    string ans=a.substr(fstart,min_len);
    
    cout<<ans<<endl;  



return 0;
}