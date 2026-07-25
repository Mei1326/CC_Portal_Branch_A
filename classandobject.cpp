#include <stdio.h>
#include<iostream>
using namespace std;
class abc
{
    public :
    void add(int a,int b)
    {
        cout<<a+b<<std::endl;
    }
};
int main()
{
    abc d;
    int a,b;
    d.add(5,7);
    return 0;
}