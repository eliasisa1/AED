#include <iostream>
#include <string>
#include <cassert>
 
using namespace std;
 
int main()
{
    
        // strings Alternativo:
    assert("txt1"s + "txt2"s == "txt1txt2"s);    
   
    assert(("cadena1" "cadena2")=="cadena1cadena2");
    assert(string("cadena1" "cadena2").compare("cadena1cadena2") == 0); 

    assert("Cadena1"=="Cadena1");           
    assert("Cadena1"s=="Cadena1"s);         
    
    assert("TextoLargo"s.at(3)=='t');
    assert("TEXTO"s.length()==5);
    
        //char
    assert('a'+1=='b');
    assert('1'+2=='3');
    assert('0'+1=='1');
    assert('0'==48);                       
    assert('a'==97);
    assert(char(255)+1==0);                

        //int
    assert(2*45==90);
    assert(25-25==0);
    assert(555-55==500);
    assert(255*255==2^16);
    assert(2^16/2^16==1);
    assert(20/6==3);
    assert(299999/200000==1);     
    assert(0-2==-2);
    assert(5 * -2 == -10);
    assert( (-2)+1 == -1);        

    //uint
    assert(32500 - 200000U == 4294799796);
    assert(0 - 2u == 4294967294);
    assert(5u * -2 == 4294967286);
    assert(4294967295u + 1 == 0 );          
    
    
    assert('\0' - 1 == -1);                      
    //cout<< 0i8;

    assert(0u -1 == 4294967295);                    
    assert(0ul - 1 == 4294967295ul );               
    assert(0ull - 1 == 18446744073709551615ul) ;    

    //bool
    assert(true == !false);
    assert(false == !true);
    assert((true && true) == true);
    assert((false && false) == false);
    assert((false || true) == true);
    assert((0 == 0));
    assert(!(1==-1));

    //Double: epsilon = 0.00001

    assert(1./3 - 0.3333 < 0.0001);
    assert(25./3 - 8.3333 < 0.0001);
    assert(11./-7 - 1.5714 < 0.0001);
    
    cout << "Todo piola pa"; }