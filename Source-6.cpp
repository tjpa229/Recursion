//lab 9

#include<iostream>
#include<string>

using namespace std;

int sum(int num1, int num2)
{
	if (num1 > num2)
	{
		return sum(num2, num1);
	}
	else if (num1 == num2)
	{
		return num1;
	}
	else {
		return num1 + sum(num1 + 1, num2);
	}
}



int gcd(int a, int b)
{

	if (b == 0)
	{
		return a;
	}
	else {
		return gcd(b, a%b);
	}


}


string reverse(string myString)
{
	if (myString.length() == 0)  // end condtion to stop recursion
		return "";

	string last(1, myString[myString.length() - 1]);  // create string with last character
	string reversed = reverse(myString.substr(0, myString.length() - 1));
	return last + reversed; // Make he last character first

}

void testSum(int num1, int num2)
{
	cout << "sum(" << num1 << "," << num2 << ") = " << sum(num1, num2) << endl;
}
void testGcd(int a, int b)
{
	cout << "gcd(" << a << "," << b << ") = " << gcd(a, b) << endl;
}

void testReverse(string myString)
{
	cout << "reverse(" <<'"'<< myString <<'"'<< ") = " << '"'<<reverse(myString)<<'"' << endl;
}

void main() {
	testSum(2, 5);
	testSum(5, 2);
	testSum(-3, 4);
	testSum(6, 6);
	testGcd(39, 52);
	testGcd(52, 39);
	testGcd(11, 7);
	testGcd(24, 42);
	testReverse("Go Cats!");
	testReverse("");
	system("pause");
}