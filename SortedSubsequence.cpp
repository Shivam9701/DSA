#include<bits/stdc++.h>
using namespace std;
void sortedSubsequence(string a,string o,vector<string> &v){
 
  //base case
  if (a.length() ==0){
  v.push_back(o);
  return;}

  //rec cases
  char ch=a[0];
  string red_str=a.substr(1);
  sortedSubsequence(red_str,o+ch,v);
  sortedSubsequence(red_str,o,v);
    
}
bool compare(string a,string b){

    if (a.length()!= b.length())
    return (a.length()<b.length());

    return a<b;

}

int main(){
    
    vector<string> v;
    string a="acdbe";
    string op="";
    sortedSubsequence(a,op,v);

    sort (v.begin(),v.end(),compare);


    for (auto s:v){
        cout<<s<<endl;
    }

return 0;
}