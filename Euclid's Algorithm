#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b); //agar b bada hai to swap ho jaayega jiska matlab hai ki humesha a bada hoga
    //One line code:
    // return b != 0?gcd(b,a%b):a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
