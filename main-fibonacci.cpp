#include <iostream>

using namespace std;

int main(){
    int n;
    int A = 0, B=1, C;

    cout << " Masukan N : " ;
    cin >> n ;

    for (int i = 0; i<n-1; i++){

        if (i==0){
            cout << A << " " << B << " " ;
        }

        else {
            C = A + B ;
            A = B;
            B = C;

            cout << C << " ";
        }
    }
}
