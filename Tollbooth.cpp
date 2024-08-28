#include<iostream>
using namespace std;
class tollbooth{
private:
     unsigned int car1;
     unsigned int car2;
     double amount;
public:
     tollbooth(){
        car1=0;
        car2=0;
        amount=0.0;

     }
     void paying_car(){
        car1++;
        amount=amount + 0.5;
     }
      
     void nopaycar(){
        car2++;
     }
    
     void printondisplay(){
        cout<<"Number of Paying cars are :"<<car1<<endl;
        cout<<"Number of Non paying cars are :"<<car2<<endl;
     }
};
int main(){
tollbooth T1;
T1.paying_car();
T1.paying_car();
T1.paying_car();
T1.paying_car();
T1.paying_car();
T1.nopaycar();
T1.nopaycar();
T1.nopaycar();
T1.nopaycar();
T1.nopaycar();
T1.printondisplay();
}