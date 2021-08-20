#include <iostream>
#include <string>
using namespace std;

int main(){
     
   string f;
   string x;
   char bit;
   int tekl = 0;
   int o = 0;

   cout << "Give me a character to look for, one please. ";
   getline(cin,f);
   cout << "Enter a sentence, i will tell yo how many " << f <<"s there are.. ";
   getline(cin,x);

   while(o<x.length()){
        bit = x[o];
        string dg(1,bit);
        if(dg == f){
             tekl++;
        }
        o++;
   }
  
   if(tekl != 0){
     cout << "There are "<< tekl<<" "<<f<< "s in your sentence.";
   }else{
     cout << "Not enough "<<tekl<<" "<< f<<"s in your sentence";
   }
  



}