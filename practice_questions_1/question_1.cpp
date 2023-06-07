#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
enum triangletype {scalene, isosceles, equilateral,noTriangle};
triangletype triangleShape(double one,double two,double three);

int main(){
    double lt_1,lt_2,lt_3;
    cout<<"Please Enter The Lenght OF all side of The Triangle : ";
    cin>>lt_1>>lt_2>>lt_3;

    triangletype type = triangleShape(lt_1,lt_2,lt_3);

    switch (type)
    {
    case scalene:
        cout<<"The Triangle Type is : scalene"<<endl;
        break;
    case isosceles:
        cout<<"The Triangle Type is : isosceles"<<endl;
        break;
    case equilateral:
        cout<<"The Triangle Type is : equilateral"<<endl;
        break;
    case noTriangle:
        cout<<"The Triangle Type is : noTriangle"<<endl;
    }
}

triangletype triangleShape(double sd_one,double sd_two,double sd_three)
{    
    if (sd_one + sd_two <= sd_three || sd_one + sd_three <= sd_two  || sd_two + sd_three <= sd_one )
    {
        return noTriangle; 
    }
    else if (sd_one == sd_two && sd_two == sd_three)
    {
        return equilateral;
    }
    else if (sd_one == sd_two || sd_two == sd_three || sd_one == sd_three) 
    {
        return isosceles;
    } 
    else
    {
        return scalene;
    }
}
