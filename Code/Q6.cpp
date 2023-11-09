//Fast pattern matching algorithm

#include <iostream>
#include <string>
using namespace std;
int PatternMatch(string text,string pattern) { 

    int n = text.length(),j; 

    int m = pattern.length();

    for (int i = 0; i <= n - m;i++) 
    {
        for ( j = 0; j < m; j++)
        { 
            if (text[i +j] != pattern[j])
            break;
        }
            if (j == m)
            { 
                return i;
            }
    }
            
        return -1; 
}
    
    int main() {
    string text, pattern; 
    cout<< "Enter the text: ";
    getline(cin, text); 

    cout << "Enter the pattern to search for: ";
    getline(cin, pattern);
    
    int index = PatternMatch(text, pattern);
    if (index != -1) 
    {
        cout << "Pattern found at index " << index << "." << endl; 
    } else {
            cout << "Pattern not found in the text." << endl;
        }

return 0;

} 