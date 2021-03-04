#include<iostream>
#include<math.h>
using namespace std;
 double powerFunction(double m,int n=2)
{
double t;
t=pow(m,n);
return t;
}

int main()
{
double num,ans;
int p;
cout<<"Enter the number: \n";
cin>>num;
if(p==0)
{
 ans=powerFunction(num);
cout<<"\nPower of "<<num<<" is " << ans<<endl;
}
else
{
 ans=powerFunction(num,p);
cout<<"\nPower of "<<num<<" is "<<ans<<endl;
}

}