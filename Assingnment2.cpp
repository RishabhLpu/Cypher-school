#include <iostream>
using namespace std;
int greatestNumber(int n, int m , int s)
{
    if(n>=m && n>=s)
    {
        cout<< "greatest number is "<< n;
    }
    else if(m>=n && m>=s)
    {
cout<< "greatest number is "<< m;
    }
        else if(s>=n && s>=m)
cout<<"greatest number is "<<s;
}
int main() {
int n=5;
int m=4;
int s=9;
greatestNumber(n,m,s);
    return 0;
}
