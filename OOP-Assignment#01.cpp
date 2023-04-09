//  Q#01
#include <iostream>
using namespace std;
int main(){
	cout<<"Hello World!!!!!";
	
	return 0;
}

//  Q#02
#include <iostream>
using namespace std;
int main(){
	string name;
	cout<<"What is your name? ";
	cin>>name;
	cout<<"Hello "<<name;

return 0;
}

//  Q#03
#include <iostream>
using namespace std;
int main(){

string name;
	cout<<"What is your name? ";
	cin>>name;
	if(name=="Alice"||name=="Bob"){
		cout<<"Helloo Mr. "<<name;
	}
}

//  Q#04
#include <iostream>
using namespace std;
int main(){
	int no;
	int sumNum = 0;
	cout<<"Enter any number ";
	cin>>no;
	for(int i=1; i<=no; i++){
		sumNum += i;
	}
	cout<<sumNum;
}

//  Q#05
#include <iostream>
using namespace std;
int main(){
int no;
	int sumNum = 0;
	cout<<"Enter any number ";
	cin>>no;
	for(int k=1; k<=no; k++){
		if(k % 3 == 0 || k % 5 == 0){
				sumNum += k;
		}
	}
	cout<<sumNum;
	
	return 0;
}

//  Q#06
 #include <iostream>
 using namespace std;
 int main(){
  int no, choiceNum;
  int productNum = 1; 
  int sumNum = 0;
  cout<<"Enter a positive integer: ";
  cin>>no;
  cout<<"Enter 1 to compute the sum or 2 to compute the product: ";
  cin>>choiceNum;

  if (choiceNum==1) {
      for (int i=1; i<=no; i++) {
          sumNum += i;
      }
      cout<<"The sum of the numbers from 1 to "<<no<< " is: "<<sumNum<<endl;
  } else if (choiceNum==2) {
      for (int i=1; i<=no; i++) {
          productNum *= i;
      }
      cout<<"The product of the numbers from 1 to "<<no<<" is: "<<productNum<<endl;
  } else {
      cout<<"Please enter 1 or 2."<<endl;
  }
  
  return 0;
}

//  Q#07
 #include <iostream>
 using namespace std;
 int main(){
 for (int m=1; m<=12; m++) {
      for (int n=1; n<=12; n++) {
          cout<<m*n<<"\t";
      }
      cout<<endl;
  }
  return 0;
}

//  Q#08
#include <iostream>
using namespace std;
bool isPrime(int num) {
      if (num<=1) {
          return false;
      }
      for (int i=2; i*i<=num; i++) {
          if (num%i == 0) {
              return false;
          }
      }
      return true;
  }
int main() {
  int limit;
  cout<<"Enter the limit: ";
  cin>>limit;
  

  cout<<"Prime numbers up to "<<limit<<" are: ";
  for (int i=2; i<=limit; i++) {
      if (isPrime(i)) {
          cout<<i<<" ";
      }
  }
  cout<<endl;
  return 0;
}

//  Q#09
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(time(0));
  int secretNumber=rand()%100+1;
  int gueses;
  int triess=0;

  cout<<"Welcome to the guessing game! Try to guess the secret number between 1 and 100."<<endl;
  while (true) {
      cout<<"Enter your guess: ";
      cin>>gueses;
      triess++;
      if (gueses==secretNumber) {
          cout<<"Congratulations! You guessed the correct number "<<secretNumber<<" in "<<triess<<" tries."<<endl;
          break;
      } else if (gueses<secretNumber) {
          cout<<"Too small. Try again."<<endl;
      } else {
          cout<<"Too large. Try again."<<endl;
      }
  }

  return 0;
}

//  Q#10
#include <iostream>
using namespace std;
int main(){
  int startYear=2021;
  int countNum=1; 
  cout<<"The next 20 leap years are"<<endl;
  for (startYear; countNum<=20; startYear++) {
      if ((startYear%4 == 0 && startYear%100 != 0) || (startYear%400 == 0) || (startYear == 2100)) {
          cout<<countNum<<") "<<startYear<<endl;
          countNum++;
      }
  }
  
  return 0;
}

//  Q#11
  #include <iostream>
  using namespace std;
  int main() {
  int array[] = {12, 34, 56, 78, 120};   // List of elements
  int sizeOfArray = sizeof(array) / sizeof(array[0]);
  int large = array[0];
  for (int i=1; i<sizeOfArray; i++) {
      if (array[i]>large) {	
          large=array[i];
      }
  }
  cout<<"The largest element in the array is: "<<large<<endl;

  return 0;
}

//  Q#12
#include <iostream>
using namespace std;
int main() {
  int array[] = {10, 20, 30, 40, 50};
  int sizeOfArray = sizeof(array) / sizeof(array[0]);
  int starting = 0;
  int ending = sizeOfArray - 1;
  for(int i=0; i<5; i++){
  	cout<<array[i]<<" ";
	}
	cout<<endl;
  while (starting<ending) {
      int temp = array[starting];
      array[starting] = array[ending];
      array[ending] = temp;
      starting++;
      ending--;
  } 
  cout<<"The reversed array is: ";
  for (int i=0; i<sizeOfArray; i++) {
      cout<<array[i]<<" ";
  }
  cout<<endl;

  return 0;
}

//  Q#13
 #include <iostream>
 using namespace std;
 int main() {
	  int inputNo;
  int array[] = {1, 2, 3, 4, 5};
  int sizeOfArray = sizeof(array) / sizeof(array[0]);
  cout<<"Enter any integer: ";
  cin>>inputNo;
  for (int i=0; i<sizeOfArray; i++) {
      if (array[i]==inputNo) {
          cout<<"The element "<<inputNo<<" exists in the array."<<endl;
          return 0;
      }
  }
  cout<<"The element "<<inputNo<<" does not exist in the array."<<endl;
  
  return 0;
}

//  Q#14
#include <iostream>
using namespace std;
  int main() {
  int array[] = {0, 15, 31, 48, 66, 85, 105, 126};
  int sizeOfArray = sizeof(array) / sizeof(array[0]);
  int* result = new int[sizeOfArray / 2];
  int resultSize = 0;

  for (int i=0; i<sizeOfArray; i++) {
      if (i%2 == 1) {
          result[resultSize] = array[i];
          resultSize++;
      }
  }
  cout<<"The elements on odd positions in the array are: ";
  for (int i=0; i<resultSize; i++) {
      cout<<result[i]<<" ";
  }
  cout<<endl;

  return 0;
}

//  Q#15
#include <iostream>
using namespace std;
int main() {
  int array[] = {1, 2, 3, 4, 5};
  int sizeOfArray = sizeof(array) / sizeof(array[0]);
  int* result = new int[sizeOfArray];
  int sum = 0;

  for (int i=0; i<sizeOfArray; i++) {
      sum += array[i];
      result[i] = sum;
  }
  cout<<"The running total of the input array is: ";
  for (int i=0; i<sizeOfArray; i++) {
      cout<<result[i]<<" ";
  }
  cout<<endl;
  
  return 0;
}
   
//  Q#16
#include <iostream>
using namespace std;
  int main(){
  string str;
  cout<<"Enter a string: ";
  cin>>str;
  bool isPalindromee=true;
  int len = str.length();
  for (int i=0; i<len/2; i++) {
      if (str[i] != str[len-i-1]) {
          isPalindromee = false;
          break;
      }
  }
  if (isPalindromee)
      cout<<"The string is a palindrome."<<endl;
  else
      cout<<"The string is not a palindrome."<<endl;

  return 0;
}

//  Q#17.A
#include <iostream>
using namespace std;

int main() {
  int numbers[]={1, 2, 3, 4, 5};
  int size=sizeof(numbers)/sizeof(numbers[0]);
  int sum=0;
  for (int i=0; i<size; i++) {
      sum+=numbers[i];
  }
  cout<<"Sum using for-loop is: "<<sum<<endl;

  return 0;
}

//  Q#17.B
#include <iostream>
using namespace std;
int main() {
  int numbers[]={1, 2, 3, 4, 5};
  int size=sizeof(numbers)/sizeof(numbers[0]);
  int sum=0;
  int i=0;
  while (i<size) {
      sum+=numbers[i];
      i++;
  }
  cout<<"Sum using while loop is: "<<sum<<endl;

  return 0;
}

//  Q#17.C
#include <iostream>
#include <vector>

using namespace std;

// Function to compute the sum of numbers in a list using recursion
int sumOfList(const vector<int>& nums, int index = 0) {
   // Base case: if the index is equal to the size of the list, return 0
   if (index == nums.size()) {
       return 0;
   }

   // Recursively compute the sum of the remaining numbers in the list
   // by adding the current number at the index to the sum of the rest of the list
   return nums[index] + sumOfList(nums, index + 1);
}

int main() {
   // Input list of numbers
   vector<int> nums = {1, 2, 3, 4, 5};

   // Compute the sum of the numbers in the list using recursion
   int sum = sumOfList(nums);

   // Output the result
   cout << "The sum of the numbers in the list is: " << sum << endl;

   return 0;
}

//  Q#18
#include <iostream>
#include <list>
#include <functional>

using namespace std;

// Function template for applying a function to every element of a list
template <typename T>
void on_all(list<T>& lst, function<void(T&)> func) {
  for (T& elem : lst) {
      func(elem);
  }
}

int main() {
  // Create a list to hold the perfect squares
  list<int> perfect_squares;

  // Function to calculate the square of a number and add it to the list
  auto add_square = [&](int num) {
      perfect_squares.push_back(num * num);
  };

  // Apply the add_square function to the numbers 1 to 20
  for (int i = 1; i <= 20; ++i) {
      on_all(perfect_squares, add_square);
  }

  // Print the first twenty perfect squares
  for (int square : perfect_squares) {
      cout << square << " ";
  }
  cout << endl;

  return 0;
}

//  Q#19
#include <iostream>
using namespace std;
int main() {
  int no = 100;
  int fib[no];
  fib[0] = 1;
  fib[1] = 1;
  cout<<fib[0]<<" "<<fib[1]<<" ";

  for(int i=2; i<no; i++) {
      fib[i]=fib[i-1] + fib[i-2];
      cout<<fib[i]<<" ";
  }

  return 0;
}

//  Q#20
#include <iostream>
#include <vector>
using namespace std;
vector<int> getDigits(int no) {
   vector<int> digits;
   while (no>0) {
       digits.insert(digits.begin(), no % 10);
       no /= 10;
   }
   return digits;
}
int main() {
   int no;
   cout<<"Enter a number: ";
   cin>>no;
   vector<int> digits = getDigits(no);
   
   cout<<"Digits: [";
   for (int i=0; i<digits.size(); i++) {
       cout<<digits[i];
       if (i<digits.size()-1) {
           cout<<",";
       }
   }
   cout<<"]"<<endl;
   
   return 0;
}

//  Q#21
#include <iostream>
using namespace std;

int main() {
  const char* words[] = {"Hello", "World", "in", "a", "frame"};
  int count = sizeof(words) / sizeof(words[0]);
  int maxLength = 0;
  
  for (int i=0; i<count; i++) {
      int length = 0;
      const char* word = words[i];
      while (*word != '\0') {
          length++;
          word++;
      }
      if (length>maxLength) {
          maxLength = length;
      }
  }
  cout<<string(maxLength + 4, '*')<<endl;
  for (int i=0; i<count; i++) {
      const char* word = words[i];
      cout<<"* ";
      while (*word != '\0') {
          cout << *word;
          word++;
      }
      cout<<string(maxLength - (word - words[i]), ' ')<<" *"<<endl;
  }
  cout<<string(maxLength + 4, '*')<<endl;

  return 0;
}


//  Q#22
#include <iostream>
using namespace std;

int main() {
  string k1, k2;
  cout<<"Enter first string: ";
  cin>>k1;
  cout<<"Enter second string: ";
  cin>>k2;

  int m=k1.length();
  int n=k2.length();
  int sk[m + 1][n + 1];
  for (int i=0; i<=m; i++) {
      for (int j=0; j<=n; j++) {
          if (i==0 || j==0)
              sk[i][j] = 0;
          else if (k1[i - 1]==k2[j - 1])
              sk[i][j]=sk[i - 1][j - 1] + 1;
          else
              sk[i][j]=max(sk[i - 1][j], sk[i][j - 1]);
      }
  }
  string common;
  int i=m, j=n;
  while (i>0 && j>0) {
      if (k1[i - 1]==k2[j - 1]) {
          common=k1[i - 1] + common;
          i--;
          j--;
      } else if (sk[i - 1][j]>sk[i][j - 1])
          i--;
      else
          j--;
  }
  cout<<"Longest common subsequence is: "<<common<<endl;

  return 0;
}

//  Q#23
#include <iostream>
using namespace std;

  int main() {
  int numInput=10;
  int input;
  int average;
  int sum=0;
  
  for(int i=0; i<numInput; i++) {
      cout<<"Enter number "<<i+1<<": ";
      cin>>input;
      sum += input;
  }
  average = (sum)/numInput;
  
  cout<<"The sum of the inputs is: "<<sum<<endl;
  cout<<"The average of the inputs is:"<<average<<endl;
  
  return 0;
}

//  Q#24
#include <iostream>
using namespace std;
  int main() {
  int range;
  
  cout<<"Enter an integer: ";
  cin>>range;
  cout<<endl;
  for(int i=1; i<=range; i++) {
      cout<<"The cube of "<<i<<" is: "<<i*i*i<<endl;
  }
  
  return 0;
}

//  Q#25
#include <iostream>
using namespace std;
  int main() {
  int no;
  cout<<"Enter a positive integer: ";
  cin>>no;
  
  for(int i=1; i<=10; i++) {
      for(int j=1; j<=no; j++) {
          cout<<j<<" x "<<i<<" = "<<i*j<< "\t";
      }
      cout<<endl;
  }
  
  return 0;
}

//  Q#26
#include <iostream>
using namespace std;
  int main() {
  int num, originalNum, remainder, result = 0;
	  int n = 0;

  cout<<"Enter a positive integer: ";
  cin>>num;
  originalNum = num;

  while (originalNum != 0) {
      originalNum /= 10;
      ++n;
  }
  originalNum = num;
  while (originalNum != 0) {
      remainder = originalNum % 10;
      int pow = 1;
      for(int i=1; i<=n; i++)
          pow *= remainder;
      result += pow;
      originalNum /= 10;
  }
  if (result == num)
      cout<<num<<" is an Armstrong number."<<endl;
  else
      cout<<num<<" is not an Armstrong number."<<endl;

  return 0;
}

//  Q#27
#include <iostream>
using namespace std;
  int main() {
  int no;
  bool primeNum=true;
  cout<<"Enter a positive integer: ";
  cin>>no;

  for(int i=2; i<no; i++) {
      if(no%i == 0) {
          primeNum=false;
          break;
      }
  }

  if(primeNum) {
      cout<<no<<" is a prime number."<<endl;
  } else {
      cout<<no<<" is not a prime number."<<endl;
  }

  return 0;
}

// Q#28
#include <iostream>
using namespace std;
  int main() {
  const int numRows = 5; // set no of rows to 5
  int pascal[numRows][numRows];
  
  for(int i=0; i<numRows; i++) {
      pascal[i][0]=1;
  }
  for(int i=1; i<numRows; i++) {
      for(int j=1; j<=i; j++) {
          pascal[i][j]=pascal[i-1][j-1]+pascal[i-1][j];
      }
  }
  for(int i=0; i<numRows; i++) {
      for(int j=0; j<numRows-i-1; j++) {
          cout<<"  ";
      }
      for(int j=0; j<=i; j++) {
          cout<<pascal[i][j]<<"   ";
      }
      cout<<endl;
  }
  return 0;
}
   
//  Q#29
#include <iostream>
using namespace std;
  int main() {
  int num, sum = 0, temp, factorial;
  
  cout<<"Enter a positive integer: ";
  cin>>num;
  temp=num;
  
  while(temp) {
      int digit=temp % 10;
      factorial=1;
      for(int i=1; i<=digit; i++) {
          factorial*=i;
      }
      sum+=factorial;
      temp/=10;
  }
  if(sum==num) {
      cout<<num<<" is a strong number."<<endl;
  } else {
      cout<<num<<" is not a strong number."<<endl;
  }

  return 0;
}

//  Q#30
#include <iostream>
using namespace std;
  int main() {
  int array[] = {5, 2, 7, 1, 8, 4, 9, 3};
  int sizeOfArray = sizeof(array)/sizeof(array[0]);

  int large=array[0];
  for (int i=1; i<sizeOfArray; i++) {
      if (array[i]>large) {
          large=array[i];
      }
  }
  cout<<"The largest element in the array is: "<<large<<endl;

  return 0;
}
