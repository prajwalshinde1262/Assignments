#include<iostream>
#include<string.h>
using namespace std;
class address{
private:
string building;
string street;
string city;
int pin;
public:
address(){
    building="";
    street="";
    city="";
    pin=0;
}
string gettbuilding(){
    return building;
}
string gettstreet(){
    return street;

}
string gettcity(){
    return city;
}
int gettpin(){
    return pin;
}

string setbuilding(string b){
    building= b;
}
string setstreet(string s){
    street=s;
}
string setcity(string c){
    city=c;
}
int  setpin(int p){
    pin=p;
}
void accept(){
    string b;
    cout<<"Enter the building name :"<<endl;
    getline(cin,b);
    setbuilding(b);
    string s;
    cout<<"Enter the street name :"<<endl;
    getline(cin,s);
    setstreet(s);
    string c;
    cout<<"Enter the city name:"<<endl;
    getline(cin,c);
    setcity(c);
    int p;
    cout<<"Enter the pin "<<endl;
    cin>>p;
    setpin(p);
}
void display(){
    cout<<"Building name is "<<gettbuilding()<<endl;
    cout<<"Street name is "<<gettstreet()<<endl;
    cout<<"City name is "<<gettcity()<<endl;
    cout<<"pin  is "<<gettpin()<<endl;
}
};
int main(){
address a1;
a1.accept();
a1.display();
}