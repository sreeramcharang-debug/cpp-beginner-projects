#include <iostream>
#include<string>
using namespace std;
double sum(double a,double b){
   return a + b;
}
double product(double a,double b){
    return a*b;
}
string division(double a,double b){
    if (b == 0){
        return "infinite";
    } else {
        int c;
        c = a/b;
        return to_string(c);
    }
}
double difference(double a,double b){
    return a-b;
}
void end(){
     cout<<"================================ THANK YOU======================================================================"<<endl;
}
void wel(){
    cout<<"==================================WELCOME========================================================================"<<endl;
}

int main(){
    wel();
    
    cout<<"Note: the program is still under work in progess.Only first number as large one and second as smaller one is currently accepted in the division calculation"<<endl;
    cout<<" signs: add = press \" + \" ;subtract = \" - \"; multiplication = \" * \";divison = \" / \""<<endl;
    cout<<"type \"no\" at the yes or no question if you want you to stop the calculator"<<endl;
while(true){
    double a;
    double b;
    cout<<"Input the numbers"<<endl;
    char aa;
    cin>>a>>b;
    cout<<"enter the sign of procedure you want"<<endl;
    cin>>aa;
    if (aa == '+'){
      double oo = sum(a,b);
      cout<<"Answer is "<<oo<<endl;
      cout<<"continue?"<<endl;
      string io;
      cin>>io;
      if (io == "no"){
        end();
        break;
      }
    } else if ( aa == '-'){
        double oo = difference(a,b);
        cout<<"Answer is "<<oo<<endl;
      cout<<"continue?"<<endl;
      string io;
      cin>>io;
      if (io == "no"){
        end();
        break;
      }
    } else if (aa == '/' ){
        string oo = division(a,b);
        
        cout<<"Answer is "<<oo<<endl;
      cout<<"continue?"<<endl;
      string io;
      cin>>io;
      if (io == "no"){
        end();
        break;
      }
    } else if (aa == '*'){
        double oo = product(a,b);
        cout<<"Answer is "<<oo<<endl;
      cout<<"continue?"<<endl;
      string io;
      cin>>io;
      if (io == "no"){
        end();
        break;
      }
    } else{
        cout<<"Error press again and properly"<<endl;
        continue;
    }
}
return 0;
}
