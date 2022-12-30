/* Programmer = Sudhanshu Barnwal 
Purpose = Given a natural number, find the number of 0’s in the binary representation of that number.
Sample Input: 1001 OR 0100
Note: Don’t count the preceding zeros.
For example: 001001 has 2 zeros as the first two zeros from left are preceding zeros.

Date = 25/12/2022   */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int num , bin = 0 , pow = 1 ;
    cout << "\n Enter any Natural number :- ";
    cin >> num ;

    cout << endl ;
    int number = num ;
    int countZeros = 0 , countOnes = 0 ;
    while ( num > 0 )
    {
        int parityDigit = num % 2 ;
        bin += (pow*parityDigit) ;
        pow *= 10 ;
        num /= 2 ;
        if ( parityDigit == 0 )
        {
            countZeros++ ;
        }
        if ( parityDigit == 1 )
        {
            countOnes++ ;
        }
    }
    cout << "\nBinary number of " << number << " is " << bin << endl ;
    cout << "\nNo. of Zero's in binary number of " << number << " is " << countZeros << endl ;
    cout << "\nNo. of One's in binary number of " << number << " is " << countOnes << endl ;
    
    return 0;
}