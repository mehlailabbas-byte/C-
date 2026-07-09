#include<iostream>
using namespace std;
class mamalia{
    public:
    string form;
    int weight;

   mamalia(){
  form ="Isoteric";
weight = 300;
cout<<"parent class constructer "<<endl;
   }

void printmamalia(){
cout<<"Form: "<<form<<endl;
cout<<"Weight: "<<weight<<endl;
cout<<"parent class method "<<endl;
}
};
class homo : public mamalia{
public :

string vname;
string genus;

homo(){

vname = "Homo neanderthalensis";
genus = "homo";
cout<<"child class constructer "<<endl;
}
void printhomo(){

cout<<"Name: "<<vname<<endl;
cout<<"Genus: "<<genus<<endl;
cout<<"Form: "<<form<<endl;
cout<<"Weight: "<<weight<<endl;
cout<<"child class method "<<endl;
}

};
class specices : public homo{
    public:
int genno;
string sname;

specices(){
genno = 46;
sname = "Homosepieans";
cout<<"grand child constructer "<<endl;

}
void printspecices(){

cout<<"Genno: "<<genno<<endl;
cout<<"Specie Name: "<<sname<<endl;
cout<<"Form: "<<form<<endl;
cout<<"Weight: "<<weight<<endl;
cout<<"GENO X Name: "<<vname<<endl;
cout<<"Genus: "<<genus<<endl;
cout<<"grand child method "<<endl;
}

};
int main(){
mamalia m;
homo h;
specices s;

  //m.printmamalia();

  h.printhomo();
   //s.printspecices();
return 0;

}
