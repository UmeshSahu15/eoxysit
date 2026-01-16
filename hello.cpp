#include<iostream>
#include<math>

int main(){

  int a;
  int b;
  char c;

  cout<"Enter First Number"<<endl;
  cin>>a;
  cout<<"Enter Secound Number"<<endl;
  cin>>b;

  cout<<"Enter Your Operation"<<endl;
  cin>>c;

  if(c=='+'){
    cout<<"Your Result is = "<<a+b<<endl;
  }
  else if(c=='-'){
    cout<<"Your Result is = "<<a-b<<endl;
  }
  else if(c=='*'){
    cout<<"your Result is = "a*b<<endl;
  }
  else if(c=='/'){
    cout<<"Your Result is = "a/b<<endl;
  }
  else{
    cout<< "Your Operation is Invalid"<<endl;
  }
  
return 0;
}
