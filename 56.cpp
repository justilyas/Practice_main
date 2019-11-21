#include <iostream>
#include <cmath>
using namespace std;

int main (){
char S;
int N;
  cin>>N;
  cin>>S;
  switch (N) {
    case 1: switch (S) {
   		case 'N': cout << "west"; break;
   		case 'S': cout << "east"; break;
   		case 'W': cout << "south"; break;
   		case 'E': cout << "north"; break;
    } break ;
	case -1: switch (S) {
   		case 'N': cout << "east"; break;
   		case 'S': cout << "west"; break;
   		case 'W': cout << "north"; break;
   	    case 'E': cout << "south"; break;
	} break;
	case 0: switch (S) {
   		case 'N': cout << "north"; break;
   		case 'S': cout << "south"; break;
   		case 'W': cout << "west"; break;
   	    case 'E': cout << "east";break;
	} break;
   }

   cout << endl;
}

