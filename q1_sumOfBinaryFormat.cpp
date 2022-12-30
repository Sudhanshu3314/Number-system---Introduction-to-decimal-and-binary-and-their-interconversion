/* Programmer = Sudhanshu Barnwal 
Purpose = Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.
Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int number , sum = 0 ;
    cout << "\n Enter any Number :- ";
    cin >> number ;

    cout << endl; 
    for (int i = 1; i <= number; i++)
    {
        sum += i ; // sum = sum + i
    }
    cout << "\n Sum of First " << number << " natural numbers is " << sum << endl ;
    int bin = 0 , pow = 1 ;
    while ( sum > 0 )
    {
        int parityDigit = sum % 2 ;
        bin += (pow*parityDigit); // bin = bin + (pow*parityDigit)
        pow *= 10 ; // pow = pow * 10 
        sum /= 2 ;  // sum = sum / 2 
    }
    cout << "\n Binary number of sum of First " << number << " natural numbers is " << bin << endl ;
    
    return 0;
}