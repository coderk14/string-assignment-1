#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    
   string str;
   cout << "enter a string" << endl;
   getline(cin,str);

   int n=str.length();

   if(n%2==0) {
    reverse(str.begin()+n/2,str.begin()+n);

    cout << str << endl;

   }
   else {
    cout << "string is not even";
   }

    return 0;
}