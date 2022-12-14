#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
char repeat(string str){//Find repeating character
  vector<char>remain={};//stores the character that has been found 
  for(char c :str){
if(find(remain.begin(),remain.end(),c)!=remain.end()){// checks whether the character is in the vector
  return c;
    }else{
      remain.push_back(c);
    }
    }
return '\0';
}

int main() {
cout<< repeat("abba");
  }
  
