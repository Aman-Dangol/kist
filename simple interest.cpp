#include<iostream>
#include<math.h>
using namespace std;
class  account{
	public:
	int customerNumber;
	string customerName;
	public:
	void takeName(){
		fflush(stdin);
		cout<<"input customer name";
		getline (cin, customerName);
		cout<<"input customer number";
		cin>>customerNumber;
	}
	
};
class saving_account:public account
{
	float compoundRate,ci;
	int principal,time;
	public:
	saving_account(){
		compoundRate=10;
	}
	void compoundinterest(int p,int t){
		float rate;
		principal=p;
		time=t;
		rate=1+(compoundRate/100);
		float power;
		power=pow(rate,time);
		ci=power*principal;
		cout<<ci;
	}
	void display(){
		cout<<"the name :"<<customerName<<endl;
		cout<<"the customer number: "<<customerNumber<<endl;
		cout<<"the compound interest"<<ci;
		
	}	
};
class current_account:public account{
	float simpleRate,si;
	int principal,time;
	public:
	current_account(){
		simpleRate=5;
	}
		void simpleInterest(int p,int t){
			 si=(p*simpleRate*t)/100;
			 cout<<"si="<<si<<endl;
		}
		void displaSi(){
			cout<<"name"<<customerName<<endl;
			cout<<"number"<<customerNumber<<endl;
			cout<<"simple interest"<<si<<endl;
		}
			

};
int main(){
	saving_account sa;
	current_account ca;
	int sx,sy;
	cout<<"input the principal"<<endl;
	cin>>sx;
	cout<<"input time"<<endl;
	cin>>sy;
	cout<<"for saving account"<<endl;
	sa.takeName();
	sa.compoundinterest(sx,sy);
	sa.display();
	cout<<"\nfor current account"<<endl;
	ca.takeName();
	ca.simpleInterest(sx,sy);
	ca.displaSi();
	return 0;
}
