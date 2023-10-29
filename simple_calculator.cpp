#include <bits/stdc++.h>
using namespace std;

int main(){
    char op;
    double n1,n2;

    cout<<"Enter an operator (+,-,*,/) : ";
    cin>>op;

    cout<<"Enter two numbers to perform operation: ";
    cin>>n1>>n2;

    switch(op){
        case '+':
          cout<< n1 <<" + "<< n2 <<" = "<< n1+n2 <<endl;
          break;
        case '-':
          cout<< n1 <<" - "<< n2 <<" = "<< n1-n2 <<endl;
          break;
        case '*':
          cout<< n1 <<" * "<< n2 <<" = "<< n1*n2 <<endl;
          break;
        case '/':
         if(n2 != 0)
          cout<< n1 <<" / "<< n2 <<" = "<< n1/n2 <<endl;
         else  
          cout<<" Divide by zero exception."<<endl;
         break;

        default:
          cout<<op<<" is an invalid operator "<<endl;
    }
    return 0;
}