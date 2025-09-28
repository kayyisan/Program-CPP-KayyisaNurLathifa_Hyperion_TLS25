#include <bits/stdc++.h>

/*
Penjabaran library, sbb :
#include <iostream>
#include <string>
#include <algorithm>
*/

using namespace std;

bool vowel (char cek){
    string kep = "aiueoAIUEO";
    for (int i=0; i<kep.length();i++){
        if (cek==kep[i]) return true; 
    }
    return false;
}

int main(){
    string a,ans;
    cout << "masukkan kata : ";
    cin >> a;
    int ascii = (int) a[0];
    string aa = to_string(ascii);
    for(int i=0 ; i<a.length() ; i++){
        if (vowel(a[i]) == false) ans += a[i];
    } 
    reverse(ans.begin(),ans.end());
    if (ans.length() % 2 == 0){
        //insert(posisi, jml char, char);
        //insert(posisi, string);
        ans.insert(ans.length()/2, aa);
    } else ans.insert(ans.length()/2+1, aa);
    cout << "kata sandi : " << ans;
    return 0;
}