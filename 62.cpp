#include <iostream>
using namespace std;
int main (){
int a;
cin>>a;
int b=a/1000/10;
int x=a/1000%10;
int y=a/100%10;
int z=a%100/10;
int p=a%10;
if (b%2==0)
b=0;
if (x%2==0)
x=0;
if (y%2==0)
y=0;
if (z%2==0)
z=0;
if (p%2==0)
p=0;
cout<<b<<x<<y<<z<<p;
}

