#include<bits/stdc++.h>
using namespace std;

int prime(int num){

  for(int i=2;i<num;i++
    if(num%i==0)
       return 0;
       
return 1;
}


int main(){

  int num;
  cout<<"enter anumber : ";
  cin>>num;
  
  if(prime(num))
   cout<<"Number is prime";
  else
   cout<<"Not prime";

return 0;
  
 //thanks for running :)
}
