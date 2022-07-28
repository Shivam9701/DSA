#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <int> v = { 10,2,-2,-20,10 };
    int K = -10;
    //brute force
    // int sum=0,count=0;
    // for (int i=0; i<v.size(); i++){
    //     sum=0;
    //     for (int j=i; j<v.size(); j++){
    //         sum += v[j];
    //         if (sum==7)
    //         count++;

    //     }
    // }
    // cout<<count;

    //SW
    unordered_map <int,int> um;
    um[0]=1;

    int j = 0, curr = 0, count = 0;
    while ( j < v.size()) {
        
        curr+=v[j];
        if (um[curr-K]){
            count+=um[curr-K];
        }
        um[curr]++;
        j++;

    }
    cout << count;

    return 0;
}