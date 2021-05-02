#include <iostream>
using namespace std;

int main() {
      int n;
     do{
           cin>>n;
           if(n!=42){
                 cout<<n<<endl;
           }
           else{
                 break;
           }
     }while(n<100);
     
	return 0;
}
