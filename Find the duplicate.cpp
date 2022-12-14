#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
char repeat(string str){//Find repeating character
  vector<char>remain={};
  for(char c :str){
if(find(remain.begin(),remain.end(),c)!=remain.end()){
  return c;
    }else{
      remain.push_back(c);
    }
    }
return '\0';
}


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
// vector<int> num ={4, 5, 1, -3, 6};
// int k=8;
// int p=4;
// int n=0;
//   sort(num.begin(),num.end());
// while(n<p){
//   if (num[n]+num[p]==k){
//     cout<<true;
//     break;
// } if(num[n]+num[p]<k){
//     n++;
//     cout<<"j"<<endl;
//   }if(p==0){
//     n++;
//     p=4;
// }if(num[n]+num[p]>k) {
//     p--;
//     cout<<"K"<<endl;
// }
// }if(num[n]+num[p]!=k){
//     cout<<false;
//   }
  
  // cout<< repeat("abba");
  
  find_duplicate({1, 4, 2, 2, 5, 2});
  }
  