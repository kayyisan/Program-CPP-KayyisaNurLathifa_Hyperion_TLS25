#include<iostream>
using namespace std;
int main(){
	long long n;
    bool b = 1;
    cout << "Bilangan apa yang ingin kamu tahu faktorisasi prima-nya ? ";
	cin >> n;
    long long in = n;
	for (int i = 2; i <= n ; i++){
		bool yes = 0;
		int c = 0;
		while (n % i == 0){
			c++;
			yes = 1;
			n /= i;
		}
		if (yes){
            if (b) {
                cout << "Faktorisasi prima dari " << in << " = ";
                b = 0;
            }
            cout << i;
			if (c != 1) cout << "^" << c;
			if (n != 1) cout << " x ";
		}
	}
}

