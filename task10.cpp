#include<iostream>
using namespace std;
main () {
int win,lose,draw;
int total;
int win1,lose1,draw1;
cout << " enter your wins : " ;
cin >> win ;
cout << " enter your draws : " ;
cin >> draw ;
cout << "enter your loses : " ;
cin >> lose ;
win1= win*3;
lose1= lose*0;
draw1 = draw*1;
total= win1 + lose1 + draw1;
cout << total;
}

