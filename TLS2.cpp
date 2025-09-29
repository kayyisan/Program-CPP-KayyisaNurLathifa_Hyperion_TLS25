#include <bits/stdc++.h>

/*
Penjabaran library, sbb :
#include <iostream>
#include <string>
*/

using namespace std;

bool vowel (char cek){
    string kep = "aiueoAIUEO";
    for (int i=0; i<kep.length();i++){
        if (cek==kep[i]) return true; 
    }
    return false;
}

void pass (int k){
    string ans, a;
    cout << "masukkan kata : ";
    cin >> a;
    int ascii = (int) a[0];
    string aa = to_string(ascii);
    for(int i=0 ; i<a.length() ; i++){
        if (vowel(a[i]) == false) ans += a[i];
    }
    string fin = ans;
    for(int i=0 ; i<ans.length() ; i++) fin [ans.length()-1-i] = ans [i];  
    if (fin.length() % 2 == 0){
        //insert(posisi, jml char, char);
        //insert(posisi, string);
        fin.insert(fin.length()/2, aa);
    } else fin.insert(fin.length()/2+1, aa);
    cout << "kata sandi : " << fin;
}

void kat (int l){
    string x, y, z, t, b = "1234567890";
    int ii;
    cout << "Masukkan password : ";
    cin >> x;
/*    for (int i=0 ; i<x.length() ; i++){
        if (b.find(x[i]) != string::npos) {   // cek apakah ada di b
            y += x[i];                  
        }
        else if (vowel(x[i]) == false) z += x[i];
    }
*/
    int i = 0;
    while (i < x.length()) {
        if (b.find(x[i]) != string::npos) {   // kalau angka
            y += x[i];                        // simpan di y
            x.erase(i, 1);                    // hapus dari string
        } else {
            if (!vowel(x[i])) z += x[i];      // simpan konsonan
            i++; // hanya maju kalau tidak hapus
        }
    }
    int an = stoi(y);
    string da = to_string(an), f = z;
    for(int i=0 ; i<x.length() ; i++) f [z.length()-1-i] = z [i];  
    if (da != to_string(f[0])) f.insert(0, da); 
    cout << "Sebagian kata asli : " << f << endl; 
}

int main(){
    int n;
    cout << "1. Kata ke password | 2. Password ke kata" << endl;
    cin >> n;
    if (n == 1) pass (n);
    else if (n==2) kat (n);
    else cout<<"Masukan salah, ulang lagi !" << endl;
    return 0;
}