//c++
#include<iostream>

using namespace std;

int main(){

    int mark[] =  {43,5,54,75};

    int p = mark;
    cout<<"the value of mark[0] is "<<p<<endl;
    cout<<"the value of mark[0] is "<<(p+1)<<endl;
    cout<<"the value of mark[0] is "<<(p+2)<<endl;
    cout<<"the value of mark[0] is "<<(p+3)<<endl;

    cout<<"mark "<<endl;

    cout<<"the value of mark[0] is "<<*p<<endl;
    cout<<"the value of mark[1] is "<<*p<<endl;
    cout<<"the value of mark[2] is "<<*p<<endl;
    cout<<"the value of mark[3] is "<<*p<<endl;
    return 0;
}
