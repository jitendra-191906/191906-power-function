#include<iostream>
using namespace std;
class Time1;
class Time{
	private:
		int hh;
		int mm;
	public:
		void input_time(int h,int m)
		{
			hh=h;
			mm=m;
		}

		friend void add(Time,Time1);
};
class Time1{
	private:
		int hh1;
		int mm1;
	public:
		void input_time(int h,int m)
		{
			hh1=h;
			mm1=m;
		}
		friend void add(Time,Time1);
};
void add(Time time,Time1 time1){
	int k1,k2;
	if(time.mm+time1.mm1<=60)
	{
		k1=time.hh+time1.hh1;
		k2=time.mm+time1.mm1;
	}
	else{
		k1=time.hh+time1.hh1+(time.mm+time1.mm1)/60;
		k2=(time.mm+time1.mm1)%60;
	}
	cout<<"add of first and second time= "<<k1<<":"<<k2<<endl;
}

int main(){
	Time time;
	Time1 time1;
	int ht1,mt1;
	cout<<"enter first time in hour and minute seprate by space "<<endl;
    cin>>ht1>>mt1;
    time.input_time(ht1,mt1);
    cout<<endl;
    int ht2,mt2;
    cout<<"enter second time in hour and minute seprate by space "<<endl;
    cin>>ht2>>mt2;
    time1.input_time(ht2,mt2);
    cout<<endl<<endl;
    cout<<"------------------------#------------------"<<endl;
    cout<<"first time= "<<ht1<<":"<<mt1<<endl;
    cout<<"second time= "<<ht2<<":"<<mt2<<endl<<endl;
    add(time,time1);
    
    
}