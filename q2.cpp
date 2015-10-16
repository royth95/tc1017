#include <iostream>
#include <string>
using namespace std;

bool isPallindrome(string chain, int size){
    for(int i = 0; i < size/2; i++)
        if(chain[i] != chain[size-i-1])
            return false;
    return true;
}
int main(){
    string chain, answer;
    do{
    cout << "Introduce the word " << endl;
    cin >> chain;
    if(isPallindrome(chain,chain.length()) == true){
        cout << chain << " is pallindrome" << endl;
    }
    else{
        cout << chain << " it is not a pallindrome" << endl;
    }
    cout << "Do you want to try with another word? (write the answer yes/no): ";
    cin >> answer;
    } while(answer == "y");

    return 0;
}
