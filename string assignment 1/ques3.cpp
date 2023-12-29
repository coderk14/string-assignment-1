#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
    
   string str;
   cout << "enter a string" << endl;
   getline(cin,str);

   string rev = str; 
   reverse(rev.begin(),rev.end());

   if(rev==str) {
    cout << "YES";
   }
   else cout << "NO";


    return 0;
}