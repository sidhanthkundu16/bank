#include <iostream>
#include <ctime>
#include <cmath>
#include <fstream>
using namespace std;
int main() {
    cout << "";
    cout << "                          Your PASSBOOK : \n";
    cout << "::::::::::::::::::::::::::::::::::::::::: \n::::::::::::::::::::::::::::::::::::::::: \n" ;
time_t now = time(0);
//convert into string form
char*dt = ctime(&now);
cout << "The current Local Date and Time : " << dt <<endl;
// Convert now to tm struct for UTC
char*dv = ctime(&now);
tm* gmtm = gmtime(&now);
dv = asctime(gmtm);
cout << "The current UTC Date and Time   : " << dv << endl;
// For password check
int g , u;
u = (98965);
cout << "Enter your password to continue : ";
cin >> g;
cout << "\n";
if (g == u){
    cout << "Welcome to bank " ;
}
else
{
    cout << "password incorrect \n"  << endl;
    return 0;
}





int  current , dep , with , loan;
//Add , withdrawl or take loan
cout << "\n";
string a;
cout << "Deposit or Withdrawal amount  : ";
cin >> a;
string b("deposit");
string c("withdrawal");



int res = a.compare(b);
int les = a.compare(c);
if(res == 0){
cout << "Enter the amount you want to Deposit : ";
cin >> dep;
current = current + dep;


     }else if (les == 0){
        cout << " Enter the amount you want you want to Withdrawal : ";
        cin >> with ;
            current = current - with;
cout << current << endl; }

string e;
string d("loan");
int p , t ,l;
cout << "If you want to take loan " ;
cin >> e;
 cout << "\n" ;
int des = e.compare(d);
 if (des == 0){
    cout << "Enter the amount you want to take from bank : ";
    cin >> p;
     cout << "\n" ;
    cout << " Time (in months) : ";
    cin >> t;
    cout << "\n" ;
 l = (p*2.75*t)/100;
 cout << "Interest of your Loan : " << l << endl;
 cout << "\n";
 cout << "Total Arrears is : " << l+p << endl;
 }

else
    cout << "Thanks for visiting ";

// Adding transaction in a file


ofstream MyFile("bank.txt");

MyFile << dt << dep;
MyFile.close();





// For help desk
cout << "For help : ";
string gl;
cin >> gl;
string f("help");
int ies = gl.compare(f);
if( ies == 0)
    cout << " contact no. : 9812438502 \n Address : VPO Titoli , Rohtak , 124001 , Haryana \n " << endl ;
     else
        cout << " Thanks for visiting \n Have a Good day" << endl;
return 0;
}
