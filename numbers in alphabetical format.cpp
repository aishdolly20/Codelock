#include <iostream> 
using namespace std;
string reportToWords(long n) ;
string numToWords(int n, string s);
string one[] = { "", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", 
                  "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " }; 
string ten[] = { "", "", "twenty ", "thirty ", "forty ",  "fifty ", "sixty ", "seventy ", "eighty ",  "ninety " }; 
int main() 
{   
    long n; 
    cin>>n;
    cout<<reportToWords(n); 
    return 0; 
} 
string numToWords(int n, string s) //this will convert the 1 or 2 digit number to words
{ 
    string str = ""; 
    if (n > 19) 
        str += ten[n / 10] + one[n % 10]; 
    else
        str += one[n]; 
    if (n!=0) 
        str += s; 
    return str; 
} 
string reportToWords(long n) //this will convert the whole number to words
{
    string report; 
    report += numToWords((n / 10000000), "crore "); // digits at crore 
    report += numToWords(((n / 100000) % 100), "lakh "); // digits at lakh
    report += numToWords(((n / 1000) % 100), "thousand "); // digits at thousand
    report += numToWords(((n / 100) % 10), "hundred "); // digits at hundred
    report += numToWords((n % 100), ""); // digits after hundereds 
    return report; 
} 