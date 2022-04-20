//template ascending order
#include<iostream>
using namespace std;
template<typename p> 
p asOr(p c[],p d){
	int i,j,t;
	for(i=0;i<d;i++){
		for(j=i+1;j<d;j++){
			if(c[i]>c[j]){
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
	}
	cout<<"in ascending order";
	for(i=0;i<d;i++){
		cout<<c[i]<<endl;
	}
}
using namespace std;
int main(){
	int n;
	cout<<"how many numbers ";
	cin>>n;
	int num[n];
	cout<<"input "<< n<<"numbers"<<endl;
	for(int i=0;i<n;i++){
		cin>>num[i];		
	}
	asOr<int>(num,n);	
}
