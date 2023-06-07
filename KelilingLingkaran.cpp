#include <iostream>
using namespace std;

int main() {
    double jariJari;
    
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
    
    double keliling = 2 * 3.14159 * jariJari;
    
    cout << "Keliling lingkaran adalah: " << keliling << endl;
    
    return 0;
}
