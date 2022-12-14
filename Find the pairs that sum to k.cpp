#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool sum(vector<int>num,int k,int p){// k is the sum that we want to get, p is the position of the last element in the vector
  int n=0;
  sort(num.begin(),num.end());
while(n<p){
  if (num[n]+num[p]==k){
    return true;
    break;
} if(num[n]+num[p]<k){
    n++;
  }if(p==0){
    n++;
    p=4;
}if(num[n]+num[p]>k) {
    p--;
}
} if(num[n]+num[p]!=k)
return false;
  }

int main() {
cout<<sum({4, 5, 1, -3, 6},8,4);
  }
  
