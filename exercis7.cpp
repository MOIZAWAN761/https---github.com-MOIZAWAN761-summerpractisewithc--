// #include<iostream>
// #include<conio.h>

// using namespace std;

// int main(){
//     unsigned long int invest_amount;
//     double interst_rate;
//     int year;

//     cout<<"enter the amount u invested";
//     cin>>invest_amount;
//     cout<<endl<<"enter the interst rate";
//     cin>>interst_rate;
//     cout<<"enter the number of years";
//     cin>>year;

//     unsigned long int profit=((invest_amount/100)*interst_rate)*year;
//     cout<<endl<<"total profit he earned after"<<year<<"is"<<profit;

// }



#include <iostream>
#include<math.h>
using namespace std;

int main() {
    unsigned long int invest_amount;
    double interest_rate;
    int year;

    cout << "Enter the amount you invested: ";
    cin >> invest_amount;

    cout << "Enter the interest rate (percent per year): ";
    cin >> interest_rate;

    cout << "Enter the number of years: ";
    cin >> year;

    // Convert interest rate from percent to decimal
    interest_rate = interest_rate / 100.0;

    // Calculate compound interest using the formula
    double total_amount = invest_amount * pow(1 + interest_rate, year);

    cout << "\nAt the end of " << year << " years, you will have " << total_amount << " dollars." << endl;

    return 0;
}
