#include <iostream>
#include <string>

using namespace std;

int main () {
    int n;
    cout << "enter the size of the string" << endl;
    cin >> n;

    char str[n];

    for(int i=0;i<n;i++) {
        cin >> str[i];
    }
    str[n]='\0';

    for(int i=0;i<n;i++) {
        if(i%2!=0) str[i]='#';
    }

    cout << str;

    return 0;
}