//WAP to show the effect of default arguments can be alternatively achieved by overloading.
#include<iostream>
#include<math.h>
using namespace std;
float powerfunction(float number,int power);
float powerfunction(float num1);
void display(float data);2



float powerfunction(float number,int power)
{
    return pow(number,power);
}
float powerfunction(float num1)
{
    int power1=2;
    return pow(num1,power1);
}
void display(float data){
    cout<<"result is "<<data<<endl;
}
int main()
{
        int p;//p is denote of power
        float num;
        float res1,res2;

        //take input form user
        cout<<"enter number is ="<<endl;
        cin>>num;
        cout<<"enter power number is ="<<endl;
        cin>>p;

        cout<<"without default power.. "<<endl;
        res1=powerfunction(num,p);               //without default value considering
        display(res1);

        cout<<"using default power condition.. "<<endl;
        res2=powerfunction(num);           //for default value
        display(res2);
        return 0;
        }

