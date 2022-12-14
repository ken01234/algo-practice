#include <iostream> //This is similar to the remove duplicates question but I just added a break when it finds the first duplicate, following the assumption that there is only one duplicate number and that it can be repeated more than once.
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int find_duplicate(vector<int>n1){
  vector<int>ans={};
  sort(n1.begin(),n1.end());
    for(int i=0;i<n1.size();i++){
      if(n1[i]==n1[i+1]){
        ans.push_back(n1[i]);
        break;
    }
  } 
  for(auto a:ans){
    cout<<a<<endl;
  }
  return 0;
}
int main() {
  
  find_duplicate({1, 4, 2, 2, 5, 2});
  }
  
