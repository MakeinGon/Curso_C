#include <iostream>
using namespace std;
int main(){
   int n1;
   int n2;
   int op;
   int res;
   cout<<"digite el primer numero"<<endl;
   cin>> n1;
   cout<<"digite el segundo numero"<<endl;
   cin>> n2;
   cout<<"ponga el numero del operador matematico correspodiente(1:+ ; 2:- ; 3:* ; 4:/)"<<endl;
   cin>> op;
   switch (op){//condicional multiple
      case 1:
         res=n1+n2; 
		 break;
      case 2:
         res=n1-n2; 
		 break;
      case 3:
         res=n1*n2; 
		 break;
      case 4:
		  res=n1/n2; 
		  break;	
      default:
	  cout<<"operador invalido"; 
	  break;
   }
   cout<< "la respuesta es "<<res<<endl;
   
   return 0;
 }