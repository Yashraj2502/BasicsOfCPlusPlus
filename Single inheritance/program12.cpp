//C++ program for calculating cube root 

#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

class A
{
    public:
        float num, ans;
        float calc()
        {
            ans = cbrt(num);
            return ans;
        }
};

class B : public A
{
    public:
        float display()
        {
            float show = calc();
            cout<<"Cube root of the given number is :- "<<show;
        }
};

int main(void)
{
    system("cls");

    B obj1;
    cout<<"Enter a number :- ";
    cin>>obj1.num;
    obj1.display();

    return 0;
}