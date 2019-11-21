#include <iostream>
using namespace std;
int main (){
int a;
cin>>a;
int x=a/100/10;
int y=a/100%10;
int z=a%100/10;
int p=a%10;
if ((x==p) && (y==z))
    cout<<"YES";
else cout<<"NO";
}

