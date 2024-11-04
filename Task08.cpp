#include<iostream>
using namespace std;
main(){
int voltage,power,current;
cout << " Enter voltage in volts : " ;
cin >> voltage ;
cout << " Enter current in ampere :" ;
cin >> current ;
power = current*voltage;
cout << power;
}