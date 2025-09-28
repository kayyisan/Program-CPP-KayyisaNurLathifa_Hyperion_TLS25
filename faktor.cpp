#include <iostream>
using namespace std;

/*int main(){
    long long n;
    bool a=1;
    cin >> n;
    int cek=2, p=0;
    while (n>0){
        cout<<"damn";
        if (n%cek == 0){
            cout<<"mbel "<<n<<endl;
            p++;
            n/=cek;
            
//            a=0;
            if (n%cek != 0){
                cout << cek << "^" << p << endl;
                p=0;
                cek++;
            }
        } else cek++;

    }
}*/

int main(){
    int n,cek=0;
    bool b=0;
    cin>>n;
    for (int i=2;i<=n;i++){    
        while (n%i==0){
            cek++;
        }
        if (cek != 0){
            if (b==1) cout << " x ";
            cout<<i<<"^"<<cek;
            b=1;
            cek=0;
        }
        
    }
}