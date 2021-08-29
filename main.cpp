#include <iostream>
using namespace std;


int cmmdc(int a,int b)
{
    if(b==0) return a;
    return cmmdc(b,a%b);
}

int main()
{
   cout<<cmmdc(14,21);
}