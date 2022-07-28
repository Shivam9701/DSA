#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "abcabcbb";
    unordered_map <char,int> um;

    int i=0,j=0,len=0,m=0;

    while( j<s.length()){
        
       if(um.count(s[j]) &&um[s[j]]>=i){
        i=um[s[j]]+1;
        len=j-i;
       }
       um[s[j]]=j;
       j++;
       len++;

       m=max(len,m);
       

    }
    cout<<m;

  


return 0;
}