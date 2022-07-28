#include<bits/stdc++.h>
using namespace std;
int find_sqrt(int n,int l,int r,int ans){
     
    if (l<=r){
        int m=(l+r)/2;
        if (m*m==n) return m;
        if (m*m>n) return find_sqrt(n,l,m-1,ans);
        if (m*m<n){
            ans=max(ans,m);
            return find_sqrt(n,m+1,r,ans);
        }
    }
    return ans;

}
int main(){

    int num=17;
    cout<<find_sqrt(num,0,num,0);


return 0;
}