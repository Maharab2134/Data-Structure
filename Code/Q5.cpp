//String Operations in C++
// Write a program that performs the following operations on strings:
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() { 

string str1,str2, str3; 

cout << "Enter the first string: ";
getline(cin, str1); 
cout <<"Enter the second string: ";
getline(cin, str2); 

str3 = str1 + str2; 
cout <<"Concatenation: " << str3 << endl; // a. Concatenation

string subStr = str3.substr(5,6);
cout << "Substring: " << subStr << endl; // b. Substring

int index = str3.find("World"); 
cout << "Index of 'World': " << index << endl;// c. Index of a substring

str3.insert(5, " beautiful");
cout << "Insert: " << str3 <<endl; // d. Insertion

str3.erase(5, 11);
cout << "Delete: " << str3 << endl; // e. Deletion

str3.replace(6, 5,"there"); 
cout <<"Replacement: " << str3 <<endl; // f. Replacement

cout << "Length of string: " << str3.length() <<endl; // g. Length of a string
char buffer[20];

str3.copy(buffer, 8, 0);
buffer[8] = '\0'; 
cout <<"Copy: " << buffer << endl;// h. Copying a string

return 0;
} 