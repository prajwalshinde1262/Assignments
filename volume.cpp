#include<iostream>
using namespace std;
class volume{
private:
int length;
int breadth;
int width;
public:
    volume(){
        length=1;
        breadth=1;
        width=1;

    }
    volume(int s){
        length=s;
        breadth=s;
        width=s;
    }
    volume(int l,int b,int w){
        length=l;
        breadth=b;
        width=w;
    }
    int calculate(){
        return length*breadth*width;
    }
};
int main(){
while(true){
cout<<"Menu for volume"<<endl;
cout<<"1. Calculate Volume with default values"<<endl;
cout<<"2. calculate volume with same values"<<endl;
cout<<"3. calculate volume with different values"<<endl;
cout<<"4. Exit"<<endl;
int ch;
cout<<"Enter your choice"<<endl;
cin>>ch;
// int result;

switch (ch)
{
case 1:
    /* code */
    {
    volume v1;
    cout<<"volume with default values"<<v1.calculate()<<endl;
    }
    break;
case 2:
{
   volume v1(10);
   cout<<"Volume with same values"<<v1.calculate()<<endl;
}
   break;
case 3:
   {
   volume v1(10,20,30);
   cout<<"Volume with different values"<<v1.calculate()<<endl;
   }
    break;

default:
    
      break;
}
 if(ch==4){
    cout<<"Exiting"<<endl;
    break;
 }
}
return 0;

}