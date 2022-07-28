#include<bits/stdc++.h>
using namespace std;
int main(){
string s="abhhhchbhbca";
     
     unordered_map <char,int> um;
     unordered_map <char,int> lm;
     int distinct=0;
     for (int i=0; i<s.length(); i++){
        if (um[s[i]]==0) {
        distinct++;
        }
        um[s[i]]++;
     }
    

     int len=0,i=0,min_len=INT_MAX,win_size,start=0,smallest_start,in_start;

     while (i<s.length()){
        
         lm[s[i]]++;
        if (lm[s[i]]==1){             
              len++;
        }
        if (len==distinct){
            in_start=start;
            while(lm[s[start]]!=1){
                lm[s[start]]--;
                start++;
            }
            win_size=i-start+1;

            if (win_size<min_len){
                min_len=win_size;
                smallest_start=start;
        
            }
        
        }
        i++;
     }
    string ans=s.substr(smallest_start,min_len);
     cout<<ans<<endl;

     if ("abc">"ba")
     cout<<" dg";





return 0;
}