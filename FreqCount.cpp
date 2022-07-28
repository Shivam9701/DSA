#include<bits/stdc++.h>
using namespace std;

int binary_search(vector <int> &v, int k,int l,int r){

    if (l<=r){
       int m=(l+r)/2;

       if (v[m]==k)
       return m;

       if (v[m]<k)
      return binary_search(v,k,m+1,r);

      else
      return binary_search(v,k,l,m-1);

    }
    return -1;

}

int lower_bound(vector <int> &v,int k,int l,int r){

    int lb=binary_search(v,k,l,r);
    int temp=binary_search(v,k,l,lb-1);
    while (temp<lb &&temp!=-1){
        lb=temp;
        temp=binary_search(v,k,l,temp-1);
    }
    return lb;

}

int higher_bound(vector <int> &v, int k,int l,int r){

    int hb=binary_search(v,k,l,r);
    int temp=binary_search(v,k,hb+1,r);
    while (temp>hb && temp!=-1){
        hb=temp;
        temp=binary_search(v,k,temp+1,r);
    }
    return hb;

}

int main(){

    vector <int> v={1,1,1,2,2,2,2,2,3,4,5,6,7};
    cout<<higher_bound(v,2,0,v.size()-1)-lower_bound(v,2,0,v.size()-1)+1;

return 0;
}