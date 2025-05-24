#include using namespace std;
int main (){
  int a, cifra; 
  cout<<"Enter a number larger than 10"<<endl;
  cin>>a;
  if (a>10) 
  { 
    cifra=a%100; 
    cout<<cifra/10;
  }
  else { 
    cout<<"Number is not larger than 10"<<endl; 
  } 
  return 0; 
}
