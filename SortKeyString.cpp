#include<bits/stdc++.h>
using namespace std;

bool sortLex(pair <string,string>& a, pair <string,string>& b){

  return a.first<b.first;

}

bool sortNumeric(pair <string,string>& a, pair <string,string>& b){
   
   int n1=stoi(a.first);
   int n2=stoi(b.first);
   return n1<n2;

}

vector <string> sortStringbyKey(vector <string> &in,int col,bool rev,bool num){

      int n=col-1;
      vector <pair<string,string>> vec;

    
      for (int i=0;i<in.size();i++){
        
        
        stringstream ss(in[i]);
        string token;
        
        getline(ss,token,' ');
      
        for (int j=0;j<n;j++){
          
          getline(ss,token,' ');
        }
        
        vec.push_back({token,in[i]});
        
        
      }
      

      if (!num){
        
       sort(vec.begin(),vec.end(),sortLex);
       
       vector <string> ans;
       for (int i=0; i<vec.size();i++){
        ans.push_back(vec[i].second);

       }
       return ans;
      }
      else{
        
        sort (vec.begin(), vec.end(),sortNumeric);
        vector <string> ans;
        for (int i = 0; i < vec.size();i++) {
            ans.push_back(vec[i].second);
        }
        return ans;
      }

    



}

int main(){

    int n; vector <string> input;
    cin>>n;
    cin.get();
    string temp;
    for (int i=0; i<n; i++){
        getline(cin,temp);
        input.push_back(temp);
    }
    
    
     
    int col; string rev; string num;bool r;bool nu; 

    cin>>col>>rev>>num;

    if (rev=="false")
    r=false;
    else if(rev=="true") r=true;
    if (num=="n")
    nu=true;
    else nu= false;
     
    

   auto ans=sortStringbyKey(input,col,r,nu);
   
   
   
   for (auto s:ans){
    cout <<s<<endl;
   }
    




    

return 0;
}