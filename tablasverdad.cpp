#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <cstring>
#include <conio.h>
#include <math.h>
	int a[8];
    int b[8];
    int c[8];
    int i ;
void llenarterminos();
void op_or();
int par(int e){
    int v;
    if(e%2==0){  /* esta funcion dice si hay resto = 0 entonces da como resultado un 1 */
        v=1; /* esto esta por nada ja pero funciona */

}
}

int main (){
    std::cout<< "(A o B )y C";
    std::cout<< "\n";
	llenarterminos();
    std::cout<< "\n";
	op_or();
	     
  }

void llenarterminos(){

    std::cout<< "A:";
  for (i=0;i<8;i++){
    if (i < 4){
    a[i]=1;
    std::cout << a[i];}
    else{
    a[i]=0;  
    std::cout << a[i];
    }
    }
     std::cout<< "\n";
    std::cout<< "B:";
    for (i=0;i<8;i=i+2){
    if (i == 2 or i==6){
    b[i]=0;b[i+1]=0;  
    std::cout<< b[i];
    std::cout<< b[i+1];
    }else{
    b[i]=1;b[i+1] =1;
    std::cout<< b[i];
    std::cout<< b[i+1];
    }
    }
    std::cout<< "\n";
    std::cout<< "C:";
    for (i=0;i<8;i++){
     if(par(i)){
        c[i]=0;
        std::cout << c[i];
    }else{
        c[i]=1;
        std::cout << c[i];
    }	
	}	
	
std::cout<< "\n";	
	
}

void op_or(){
int vecor[8];	
std::cout<< "VectorOR (A OR B):";
for(i=0;i<8;i++){
	if (a[i]==0 and b[i]==0 ){
	vecor[i]=0;
	std::cout << vecor[i];
	}else{
	vecor[i]=1;	
	std::cout << vecor[i];
	}		
}	
std::cout<< "\n";
	
int vecand[8];	
std::cout<< "VectorAND (VectorOR AND C ) :";
for(i=0;i<8;i++){
	if (vecor[i]==1 and c[i]==1 ){
	vecand[i]=1;
	std::cout << vecand[i];
	}else{
	vecand[i]=0;	
	std::cout << vecand[i];
	}		
}			
}

