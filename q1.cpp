#include<bits/stdc++.h>
using namespace std;
long long solution(string a, string b) {

    long long int m = a.length();
    int n = b.length();
    long long int ans;

    int j = 0;

    while (j < n) {
        int index = a.find(b[j]);
        if (index == -1) {
            return -1;
        }
        else {
            j++;
        }

    }

    j = 0;


    for (long long i = 0; i < a.length() && j < n;i++) {

        if (a[i] == b[j]) {
            j++;
            if (j == n) {
                ans = i + 1;
                break;
            }
        }
        if (i == a.length() - 1)
            a += a;
    }


    return ans;



}
int main(){

    int n=solution("abccdb","aa");
    cout<<n;
    return 0;
}
