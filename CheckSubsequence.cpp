#include<bits/stdc++.h>
using namespace std;

bool check(string a, string b) {

    int m=a.size();
    int n=b.size();
    int j=0; //
    for (int i=0; i<m;i++){
        if (a[i]==b[j]){
            j++;
        }
    }
    if (j==n) return true;
    return false;

}
int main(){
    string a="Helper";
    string b="epr";
    cout<<check(a,b)<<endl;

return 0;
}