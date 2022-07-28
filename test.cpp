#include <bits/stdc++.h>
using namespace std;

string normalize(const string& sentence) {
    string copy = sentence;
    //Make the changes in copy, and return it
    stringstream ss(copy);
    string token;
    

       int i=0,j=0;

    while (getline(ss, token, ' ')) {

         i=copy.find(token[0],i);
         j=copy.find(" ",i);
        
       int n=token.size();
       for(int i=0;i<n;i++){

        if (i!=0)
        token[i]=tolower(token[i]);
        else
        token[i]=toupper(token[i]);
       }
       if (j!=-1){
        int m=0;
       for (int k=i;k<j;k++){
        copy[k]=token[m];
        m++;
       }
       }else{
           int m = 0;
           for (int k = i;k < copy.length();k++) {
               copy[k] = token[m];
               m++;
           }

       }
       
    }




    return copy;
}
int main(){
    string a ="hELLO yOu aRe UGLy";
    string op=normalize(a);
    cout<<op;
}