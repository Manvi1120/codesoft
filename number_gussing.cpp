#include <bits/stdc++.h>
using namespace std;
 
int main(){
    srand((unsigned int) time(NULL));
    int number = rand() % 100 + 1 ;
    int guess = 0;
    do{
        cout<<"Enter a Number (b/w 1-100) : ";
        cin>>guess;
        if(guess>number){
            cout<<"Guess a lower number.."<<endl;
        }
        else if(guess < number){
            cout<<"Guess a higher number.."<<endl;
        }
        else{
            cout<<"You win!!"<<endl;
        } 
    }while(guess != number);
return 0;
}