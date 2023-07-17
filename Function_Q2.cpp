#include<iostream>
using namespace std;
float AreaCircum(){
	float r;
	cout<<"Enter the radius of circle: "<<endl;
	cin>>r;
	cout<<"Area= "<<3.142*r*r<<endl;
	cout<<"Circumferance= "<<2*3.142*r<<endl;
}
int main(){
	AreaCircum();
	return 0;
}
