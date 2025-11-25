#include <iostream>
using namespace std;
int Fib(int i){
    if(i==1||i==2){
        return 1;
    }
    return Fib(i-1)+Fib(i-2);
}
int main(){
    int n;
    cin>>n;
    cout<<"SEARCH"<<" "<<"fib("<<n<<")"<<endl;
    cout<<"SEARCH"<<" "<<"fib("<<n-1<<")"<<endl;
    cout<<"GET"<<" "<<"fib("<<n-1<<")"<<"="<<Fib(n-1)<<endl;
    cout<<"SEARCH"<<" "<<"fib("<<n-2<<")"<<endl;
    cout<<"GET"<<" "<<"fib("<<n-2<<")"<<"="<<Fib(n-2)<<endl;
    cout<<"GET"<<" "<<"fib("<<n<<")"<<"="<<Fib(n)<<endl;
    cout<<Fib(n)<<endl;
}
