/* Programmer = Sudhanshu Barnwal 
Purpose = - Given two binary numbers, return the greatest of these numbers in decimal format.
Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int bin1 , bin2 ;
    cout << "\n Enter First Binary Number :- ";
    cin >> bin1 ;
    cout << "\n Enter Second Number :- ";
    cin >> bin2 ;
 
    int b1 = bin1 , b2 = bin2 , num1 = 0 , num2 = 0 , pow1 = 1 , pow2 = 1;
    while ( bin1 > 0 )
    {
        int lastDigit = bin1 % 10 ;
        num1 += (pow1*lastDigit) ;
        pow1 *= 2 ; 
        bin1 /= 10 ;
    }

    while ( bin2 > 0)
    {
        int lastDigit = bin2 % 10 ;
        num2 += (pow2*lastDigit);
        pow2 *= 2 ;
        bin2 /= 10 ;
    }
    
    if ( num1 == num2 )
    {
        cout << "\n Both numbers are same." << endl ;
    }
    else if ( num1 > num2 )
    {
        cout << "\nYour first Binary number i.e." << num1 << " is greatest number." << endl ;
    }
    else if ( num2 > num1 )
    {
        cout << "\nYour second Binary number i.e." << num2 << " is greatest number." << endl ;
    }

    return 0;
}