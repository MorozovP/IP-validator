// 
//

#include "pch.h"
#include <iostream>
#include <string>
#include <iterator>
#include <cctype>

using namespace std;

bool correctSymbol(string s) {
	unsigned tmp = 0;
	for (decltype(s.length()) i = 0; i != s.length(); ++i) {
		if (isdigit(s[i]) || s[i] == '.') {
			++tmp;
		}
	}
	if (tmp == s.length()) {
		return 1;
	}
	else {
		return 0;
	}
}
//bool correctFormat ()
bool correctFormat(string s, int a, int b, int c, int d) {
	if (s.length() >= 7 && s.length() <= 14 && a >= 0 && a <= 255 &&
		b >= 0 && b <= 255 && c >= 0 && c <= 255 && d >= 0 && d <= 255) {
		return 1;
	}
	else {
		return 0;
	}
		
}


int main() {
	string s;
	string s0, s1, s2, s3;
	int dot1 = 0;
	int dot2 = 0;
	int dot3 = 0;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;

	getline(cin, s);
	if (!s.empty() && correctSymbol(s)) {
		try {
			dot1 = s.find(".");
			dot2 = s.find(".", dot1 + 1);
			dot3 = s.find(".", dot2 + 1);
			s0 = s.substr(0);
			s1 = s.substr(dot1 + 1);
			s2 = s.substr(dot2 + 1);
			s3 = s.substr(dot3 + 1);
			num1 = stoi(s0);
			num2 = stoi(s1);
			num3 = stoi(s2);
			num4 = stoi(s3);
		}
		catch (invalid_argument) {
			cout << "NO";
			return 0;
		}
		if (correctFormat(s, num1, num2, num3, num4)) {
			cout << "YES";
		}
		else 
			cout << "NO";
	}
	else
		cout << "NO";
	
		

	return 0;
}
