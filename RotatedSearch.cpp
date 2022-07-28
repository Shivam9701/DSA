#include<bits/stdc++.h>
using namespace std;

int rotatedSearch(vector<int>& v, int key, int l, int r) {

    if (l<=r){

    int m = (l + r) / 2;

    if (v[m] == key) return m;
    if (v[l] == key) return l;
    if (v[r] == key) return r;

    if (v[m] > v[l] && v[m] > v[r]) {

        if (key > v[l] && key < v[m])
            return rotatedSearch(v, key, l, m - 1);
        
        return rotatedSearch(v,key,m+1,r);

    }

    if (v[m]<v[l] and v[m]<v[r]){

        if (key>v[m] and key<v[r])
        return rotatedSearch(v,key,m+1,r);

        return rotatedSearch(v,key,l,m-1);
    }

    if (v[m]>v[l] and v[m]<v[r])
    {
        if (key>v[m] and key<v[r])
        return rotatedSearch(v,key,m+1,r);

     

    }
    

    }
    return -1;

}



int main() {

    vector <int> v = { 6,7,8,1,2,3,4,5 };
    int key =7 ;
    cout<<rotatedSearch(v,key,0,v.size()-1);




    return 0;
}