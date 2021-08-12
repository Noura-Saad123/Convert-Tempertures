#include <iostream>
using namespace std;
int main()
{
  cout<<"welcome to unit converter!\n";
  cout<<"choose one of the following options\n";
  cout<<"enter ,1, if you choose temperature\n";
  cout<<"enter ,2, if you choose mass\n";
  cout<<"enter ,3, if you choose length\n";
  int num;
  float temperature,mass,length;
  cin>>num;
  if (num==1)
  {
      cout<<"enter the value of temperature in celsius\n";
      cin>>temperature;
      cout<<"the temperature in fahrenheit ="<<((temperature*1.8)+32)<<"\n";
      cout<<"the temperature in kelvin ="<<(temperature+273.15)<<"\n";
  }
  else if(num==2)
  {
    cout<<"enter the value of mass in kg\n";
    cin>>mass;
    cout<<"the mass in gram="<<(mass*1000)<<"gram\n";
    cout<<"the mass in pound="<<(mass*2.205)<<"pound\n";
    cout<<"the mass in ton ="<<(mass*0.001)<<"ton\n";
  }
  else if(num==3)
  {
      cout<<"enter the value of length in meter\n";
      cin>>length;
      cout<<"the length in cm="<<(length*100)<<"cm\n";
      cout<<"the length in km="<<(length*0.001)<<"km\n";
      cout<<"the length in yard="<<(length*1.094)<<"yard\n";

  }
  else
    cout<<"you did not choose from the options,choose again\n";

 cout<<"thank you\n";

}
