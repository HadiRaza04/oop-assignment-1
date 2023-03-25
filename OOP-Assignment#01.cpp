#include <iostream>
using namespace std;

int main() {
    int numInputs = 10;
    int input;
    int average;
    int sum = 0;
    
    for(int i=0; i<numInputs; i++) {
        cout<<"Enter number "<<i+1<<": ";
        cin>>input;
        sum += input;
    }
    average = (sum) / numInputs;
    
    cout<<"The sum of the inputs is: "<<sum<<endl;
    cout<<"The average of the inputs is:"<<average<<endl;
    
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
//  int n;
//	int sum = 0;
//	cout<<"Enter any number ";
//	cin>>n;
//	for(int i=1; i<=n; i++){
//		sum += i;
//	}
//	cout<<sum;

//  Q#05
//  int n;
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

//  Q#06
//    int n, choice;
//    int product = 1; 
//    int sum = 0;
//    cout<<"Enter a positive integer: ";
//    cin>>n;
//    cout<<"Enter 1 to compute the sum or 2 to compute the product: ";
//    cin>>choice;
//
//    if (choice == 1) {
//        for (int i=1; i<=n; i++) {
//            sum += i;
//        }
//        cout<<"The sum of the numbers from 1 to "<<n << " is: "<<sum<<endl;
//    } else if (choice == 2) {
//        for (int i=1; i<=n; i++) {
//            product *= i;
//        }
//        cout<<"The product of the numbers from 1 to "<<n<<" is: "<<product<<endl;
//    } else {
//        cout<<"Please enter 1 or 2."<<endl;
//    }


//  Q#07
//  for (int i=1; i<=12; i++) {
//        for (int j=1; j<=12; j++) {
//            cout<<i * j<<"\t";
//        }
//        cout<<endl;
//    }

//  Q#08

//  Q#09

//  Q#10
//int year=2021;
//    int count=1; 
//    cout<<"The next 20 leap years are"<<endl;
//    
//    for (year; count<=20; year++) {
//        if ((year%4 == 0 && year%100 != 0) || (year%400 == 0)) {
//            cout<<count<<") "<<year<<endl;
//            count++;
//        }
//    }


//  Q#16
//int main()
//{
//    string str;
//    cout << "Enter a string: ";
//    cin >> str;
//
//    bool isPalindrome = true;
//    int len = str.length();
//    for (int i = 0; i < len / 2; i++) {
//        if (str[i] != str[len - i - 1]) {
//            isPalindrome = false;
//            break;
//        }
//    }
//    if (isPalindrome)
//        cout << "The string is a palindrome." << endl;
//    else
//        cout << "The string is not a palindrome." << endl;
//
//    return 0;


//  Q#19
//int main() {
//    int n = 100;
//    int fib[n];
//    fib[0] = 1;
//    fib[1] = 1;
//    std::cout << fib[0] << " " << fib[1] << " ";
//
//    for(int i=2; i<n; i++) {
//        fib[i] = fib[i-1] + fib[i-2];
//        std::cout << fib[i] << " ";
//    }
//
//    return 0;



//  Q#20
//int count_digits(int num) {
//    int count = 0;
//    do {
//        num /= 10;
//        count++;
//    } while (num != 0);
//    return count;
//}
//void get_digits(int num, int arr[]) {
//    int i = 0;
//    do {
//        arr[i] = num % 10;
//        num /= 10;
//        i++;
//    } while (num != 0);
//}
//int main() {
//    int num;
//    std::cout << "Enter a number: ";
//    std::cin >> num;
//    
//    int num_digits = count_digits(num);
//    int* arr = new int[num_digits];
//    get_digits(num, arr);
//
//    std::cout << "Digits: [";
//    for (int i = num_digits - 1; i >= 0; i--) {
//        std::cout << arr[i];
//        if (i != 0) {
//            std::cout << ", ";
//        }
//    }
//    std::cout << "]" << std::endl;
//    delete[] arr;
//    return 0;


//  Q#27
//int main() {
//    int num;
//    bool primeNum = true;
//
//    cout<<"Enter a positive integer: ";
//    cin>>num;
//
//    for(int i=2; i<num; i++) {
//        if(num%i == 0) {
//            primeNum = false;
//            break;
//        }
//    }
//
//    if(primeNum) {
//        cout <<num<<" is a prime number."<<endl;
//    } else {
//        cout<<num<<" is not a prime number."<<endl;
//    }
//
//    return 0;


//  Q@28
//int main() {
//    const int numRows = 5; // set no of rows to 5
//    int pascal[numRows][numRows];
//    
//    for(int i = 0; i < numRows; i++) {
//        pascal[i][0] = 1;
//    }
//    for(int i = 1; i < numRows; i++) {
//        for(int j = 1; j <= i; j++) {
//            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
//        }
//    }
//    for(int i = 0; i < numRows; i++) {
//        for(int j = 0; j < numRows - i - 1; j++) {
//            cout << "  ";
//        }
//        for(int j = 0; j <= i; j++) {
//            cout << pascal[i][j] << "   ";
//        }
//        cout << endl;
//    }
//    
//    return 0;



//  Q#29
//int main() {
//    int num, sum = 0, temp, factorial;
//    
//    cout << "Enter a positive integer: ";
//    cin >> num;
//    temp = num;
//    
//    while(temp) {
//        int digit = temp % 10;
//        factorial = 1;
//        for(int i = 1; i <= digit; i++) {
//            factorial *= i;
//        }
//        sum += factorial;
//        temp /= 10;
//    }
//    if(sum == num) {
//        cout<<num<<" is a strong number."<<endl;
//    } else {
//        cout<<num<<" is not a strong number."<<endl;
//    }
//
//    return 0;











