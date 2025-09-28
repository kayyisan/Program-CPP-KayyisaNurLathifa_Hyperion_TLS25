#include <iostream>
using namespace std;

int main(){
    int a = -1, ans=0;
    while (a < 0) {
        cout << "Anda ingin mengetahui deret fibonacci suku ke ";
        cin >> a;
        if (a >= 0) break;
        cout << "Tidak bisa, suku deret fibonacci paling kecil adalah 0" << endl << endl;
    }
    int arr[a];
    for (int i = 0 ; i <= a ; i++ ){
        if (i==0) arr [i] = 0;
        else if (i==1) arr[i] = 1;
        else arr [i] = arr[i-1] + arr[i-2];
        ans += arr[i];
        cout <<"Suku ke "<< i <<" = "<< arr[i] << endl;
    }
    cout << "Jumlah deret fibonacci hingga suku ke " << a <<" = " << ans;
    return 0;
}