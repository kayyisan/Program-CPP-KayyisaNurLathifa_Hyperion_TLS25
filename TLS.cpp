#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int p = (n-25) % 103;
    if (0 <= p && p <= 19) cout << "Hijau";
    else if (20 <= p && p <= 22) cout << "Kuning"; 
    else cout << "Merah";
}