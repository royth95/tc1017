#include <iostream>
using namespace std;

void fibonacci(int n){
	int n1=1, n2=1, result;
	for(int i = 0; i <= n; i++){
		if (i == 0){
			cout << "The fibonacci of " << i << " is " << 0 << endl;
		}
		if (i == 1){
			cout << "The fibonacci of " << i << " is " << 1 << endl;
		}
		if(i == 2){
            cout << "The fibonacci of " << i << " is " << 1 << endl;
		}
		if (i > 2){
			result = n1 + n2;
			cout << "The fibonacci of " << i << " is " << result << endl;
			n1 = n2;
			n2 = result;
		}
	}
}

int main(){
	fibonacci(10);
	return 0;
}
