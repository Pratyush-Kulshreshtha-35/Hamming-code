#include<iostream>
using namespace std;

int main()
{
    int i , a[8] , data[12] = {0} , total = 0 ;

    cout << "Enter the 8-bit data (bit by bit): ";
    for(i = 0 ; i < 8 ; i++) {
        cin >> a[i];
    }

    data[3] = a[0];
    data[5] = a[1];
    data[6] = a[2];
    data[7] = a[3];
    data[9] = a[4];
    data[10] = a[5];
    data[11] = a[6];
    data[12] = a[7];

    int p1 = data[3] + data[5] + data[7] + data[9] + data[11];
    if(p1 % 2 != 0) {
        total += 1;
        cout << "Parity of 2^0 is 1 (Odd)." << endl;
    } 
    else {
        cout << "Parity of 2^0 is 0 (Even)." << endl;
    }

    int p2 = data[3] + data[6] + data[7] + data[10] + data[11];
    if(p2 % 2 != 0) {
        total += 2;
        cout << "Parity of 2^1 is 1 (Odd)." << endl;
    } 
    else {
        cout << "Parity of 2^1 is 0 (Even)." << endl;
    }

    int p4 = data[5] + data[6] + data[7] + data[12];
    if(p4 % 2 != 0) {
        total += 4;
        cout << "Parity of 2^2 is 1 (Odd)." << endl;
    } 
    else {
        cout << "Parity of 2^2 is 0 (Even)." << endl;
    }

    int p8 = data[9] + data[10] + data[11] + data[12];
    if(p8 % 2 != 0) {
        total += 8;
        cout << "Parity of 2^3 is 1 (Odd)." << endl;
    } 
    else {
        cout << "Parity of 2^3 is 0 (Even)." << endl;
    }

    if(total == 0) {
        cout << "8-bit data is correct." << endl;
    } 
    else {
        cout << "Error detected at position: " << total << endl;
        
        if (total >= 1 && total <= 12) {
            cout << "Old data: ";
            for(i = 0; i < 8; i++) {
                cout << a[i] << " ";
            }
            cout<<endl;
            data[total] = data[total] ^ 1; 
            a[0] = data[3];
            a[1] = data[5];
            a[2] = data[6];
            a[3] = data[7];
            a[4] = data[9];
            a[5] = data[10];
            a[6] = data[11];
            a[7] = data[12];
            cout << "Corrected data: ";
            for(i = 0; i < 8; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
