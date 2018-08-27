#include <iostream>

using namespace std;

bool checkPrime(int number){
	bool isPrime = true;
	
	for(int i=2; i<= number/2; i++){
		if(number%i == 0){
			isPrime = false;
			break;
		}
	}
	
	return isPrime;
}

int main(){
	
	int number;
	cout << "Enter an Integer: ";
	cin >> number;
	
	if (number == 1){
		cout << number << " is not a Prime Number." << endl;
	}
	else if (checkPrime(number)){
		cout << number << " is a Prime Number." << endl;
	}else if (!checkPrime(number)){
		cout << number << " is not a Prime Number." << endl;
	}

	return 0;
}
