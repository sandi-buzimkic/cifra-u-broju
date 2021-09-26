#include <iostream>
using namespace std;
int main (){
	int a, cifra;
	cout<<"unesi broj visi od 10"<<endl;
	cin>>a;
	if (a>10) {
	cifra=a%100;
	cout<<cifra/10;}
else {
	cout<<"broj nije visi od 10"<<endl;
} 
	return 0;
}
