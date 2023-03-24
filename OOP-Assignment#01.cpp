#include <iostream>
using namespace std;
int main() {
	
    int n, choice;
    int product = 1; 
    int sum = 0;
    cout<<"Enter a positive integer: ";
    cin>>n;
    cout<<"Enter 1 to compute the sum or 2 to compute the product: ";
    cin>>choice;

    if (choice == 1) {
        for (int i=1; i<=n; i++) {
            sum += i;
        }
        cout<<"The sum of the numbers from 1 to "<<n << " is: "<<sum<<endl;
    } else if (choice == 2) {
        for (int i=1; i<=n; i++) {
            product *= i;
        }
        cout<<"The product of the numbers from 1 to "<<n<<" is: "<<product<<endl;
    } else {
        cout<<"Please enter 1 or 2."<<endl;
    }

    return 0;
}




//  Q#01
//	cout<<"Hello World!";
	
//  Q#02	
//	string name;
//	cout<<"What is your name? ";
//	cin>>name;
//	cout<<"Hello "<<name;

//  Q#03
//  string name;
//	cout<<"What is your name? ";
//	cin>>name;
//	if(name == "Alice" || name == "Bob"){
//		cout<<"Hello "<<name;
//	}

//  Q#04
//int n;
//	int sum = 0;
//	cout<<"Enter any number ";
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		sum += i;
//	}
//	cout<<sum;

//  Q#05
//int n;
//	int sum = 0;
//	cout<<"Enter any number ";
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		if(i % 3 == 0 || i % 5 == 0){
//				sum += i;
//		}
//	}
//	cout<<sum;
//	return 0;
