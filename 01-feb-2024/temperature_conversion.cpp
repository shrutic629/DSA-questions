#include<bits/stdc++.h>
using namespace std;

void convert_temperature(double temperature, char scale)
{
    if(scale=='C' || scale=='c')
    {
        temperature=temperature*(1.8)+32;
        scale='F';
    }
    else if(scale=='F' || scale=='f')
    {
        temperature=(temperature-32)*(0.56);
        scale='C';
    }
    else
    {
        cout<<"Invalid temperature scale";
    }
    cout<<"converted temperature: "<<temperature<<" "<<scale<<endl;
 
}

int main()
{
    double temperature;
    char scale;
    
    cout<<"Enter the temperature: ";
    cin>>temperature;
    
    cout<<"Enter temperature scale('C' for celcius, 'F' for fahrenheit)";
    cin>>scale;
    
    convert_temperature(temperature, scale);
    
    // cout<<"converted temperature: "<<temperature<<" "<<scale<<endl;
 
    return 0;
}