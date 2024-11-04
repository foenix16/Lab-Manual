#include<iostream>
using namespace std;
main() {
float matric,inter,ecat;
float aggregate;
cout <<" Enter your matric marks out of 1100 : " ;
cin >> matric;
cout << " Enter your intermediate marks out of 560 : " ;
cin >> inter;
cout << " Enter your ecat marks out of 400 : " ;
cin >> ecat ;
float matricPercentage, intermediatePercentage,ecatPercentage;
matricPercentage = (matric / 1100)*100*0.10;
intermediatePercentage = (inter / 550) * 100 * 0.40;
ecatPercentage = (ecat / 400) * 100 * 0.50; 

   
 aggregate = matricPercentage + intermediatePercentage + ecatPercentage;
cout << aggregate;
}