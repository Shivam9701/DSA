#include<bits/stdc++.h>
using namespace std;
int main(){
    

    //stringstream buffer
    string input;
    getline(cin, input);

    stringstream ss(input);
     
    string token;
    vector <string> tokens;
    while(getline(ss,token,' ')){
        tokens.push_back(token);
    }

    for (auto token :tokens){
        cout<<token<<",";
    }

    //strtok function 
    

    


return 0;
}