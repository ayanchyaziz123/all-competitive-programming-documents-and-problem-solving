#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>
using boost::multiprecision::cpp_int;
using namespace std;

int main() {
   int t;
     cpp_int fact=1;
   cin>>t;
   while(t--){
       int n;
     fact=1;
       cin>>n;
       for(int i=1;i<=n;i++){
       fact=fact*i;    
       }
       cout<<fact<<endl;
   }
	return 0;
}