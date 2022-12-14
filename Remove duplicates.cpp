#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int duplicate(vector<int>n1){
  vector<int>ans={};
  sort(n1.begin(),n1.end());
    for(int i=0;i<n1.size();i++){
      if(n1[i]!=n1[i+1]){
        ans.push_back(n1[i]);//stores the number if not in the vector
    }
  } 
  for(auto a:ans){
    cout<<a<<endl;
  }
  return 0;
}
int main() {
  
  duplicate({4, 4, 2, 3, 2, 2, 4, 3});// 
  }
  
