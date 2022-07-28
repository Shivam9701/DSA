#include<bits/stdc++.h>
using namespace std;
int lcs(string s1,string s2,int i,int j,vector<vector<int> >dp){
    int n1=s1.length();
    int n2=s2.length();

    if(i==-1||j==-1)
    return dp[i+1][j+1]=0;
    
    if (dp[i+1][j+1]!=-1)
    return dp[i+1][j+1];

    if (s1[i]==s2[j])
    return dp[i+1][j+1]=1+lcs(s1,s2,i-1,j-1,dp);

    else{
        return dp[i+1][j+1]=max(lcs(s1,s2,i-1,j,dp),lcs(s1,s2,i,j-1,dp));
    }



}
int main(){

    string s1="ABCDEG";
    string s2="ABEDG";
    int n1=s1.length();
    int n2=s2.length();
    vector <vector <int>> dp(n1+1,vector <int>((s2.length()+1),-1));
    int lc=lcs(s1,s2,n1-1,n2-1,dp);
    cout<<lc;


return 0;
}