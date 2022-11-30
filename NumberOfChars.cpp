#include <iostream>
#include <string>
using namespace std;

int stringCharsNumber(string str) {
    int count=0;
    for (char &c : str)
    {
        count++;
    }
    return count;
}
int main(){
    string str;
    cout << "Enter the string to start function." << endl;
    cin >> str;
    cout << "Number of character is " << stringCharsNumber(str) << endl;
    return 0;
}
