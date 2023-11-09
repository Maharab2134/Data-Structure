//Secound pattern searching algorithm
#include <bits/stdc++.h>
#include <string>
#include <cstring> 
using namespace std;

void Array(char* pat, int M,int* lps) { 
    int len = 0;
    lps[0] = 0;
    int i = 1; 
    while (i < M){ 
        if (pat[i] == pat[len]) 
{ 
    len++;
    lps[i] = len; 
    i++;
} 
else { 
    if (len != 0){ 
        len = lps[len -1];
        } else {
            lps[i] = 0; 
            i++;
            }
        }
    }
}

void ScoundSearch(char*pat, char* txt) { 
    int M = strlen(pat);
    int N =strlen(txt); 
    int lps[M];
    Array(pat, M, lps);
    int i = 0;
    int j = 0; 
    while ((N - i) >= (M - j)) 
    { 
        if (pat[j] == txt[i])
        { 
            j++;
            i++;
        }
    if (j == M) {
    printf("Found pattern at index %d\n", i - j); 
    j = lps[j - 1];
}

else if 
(i < N && pat[j] != txt[i]) {
    if (j != 0) { j = lps[j - 1]; 
    } else { 
        i = i + 1;
        }
        }
   }
} 

int main() {
    char txt[100];
    char pat[100];
    cout << "Enter the text: ";
    cin.getline(txt, 100);
    cout << "Enter the pattern: ";
    cin.getline(pat, 100);
    ScoundSearch(pat, txt);
    return 0;
}