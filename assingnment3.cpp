#include <iostream>
using namespace std;
int sumOfThree(int n , int m, int s)
{
    return n+m+s;
}
int main() {
int s=9;
int r=8;
int e=6;
int q=sumOfThree(s,r,e);
cout<<"Sum of the three numbers are "<<q;
    return 0;
}
