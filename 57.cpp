#include <iostream>
#include <cmath>
using namespace std;
int main (){
    int day;
    int month;
    int year;
    cin>>day>>month>>year;
    if (month>12){
        cout<<"NO";
    }
    switch (month){
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    if ((day>=1) && (day<=31))
        cout<<"YES";
        else
            cout<<"NO";
            break;
case 2:
    if ((day>=1) && (day<=28))
        cout<<"YES";
    else
        cout<<"NO";
        break;
case 4:
case 6:
case 9:
case 11:
    if ((day>=1) && (day<=30))
        cout<<"YES";
    else cout<<"NO";
    break;
    }
}

