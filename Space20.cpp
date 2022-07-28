#include<bits/stdc++.h>
using namespace std;
char* space20(char* s){
     
    int count=0;

    for (int i=0  ;s[i]!='\0';i++){
        if (s[i]==' ')
        count++;
    }
    if (count==0)
    return s;
    
    //need 2*countmore spaces to fit %20 in the string
    int n=strlen(s);
    int space=2*count;
    int idx=n+space;
    s[idx]='\0';
    for (int i=n-1;i>=0;i--){

        if (s[i]!=' '){
            s[idx-1]=s[i];
            idx--;
        }
        else{
            s[idx-1]='0';
            s[idx-2]='2';
            s[idx-3]='%';
            idx=idx-3;
        }
        
        
    }
    return s;


}



int main(){
     char s[1000]="hello world, how are you?";
     auto res=space20(s); //
     cout<<res;




return 0;
}