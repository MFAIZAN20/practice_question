#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double sidecutreturn(double y,double x);
int main(){
    double lenght,width,area,sidecut,height;
    cout<<"Please Enter The Are Of The Area: "<<endl;
    cin>>area;

    lenght=sqrt(area);
    width=lenght;

    sidecut=sidecutreturn(lenght,width);
    height=sidecut;

    int new_lenght=lenght-(2*sidecut);
    int new_width=width-(2*sidecut);

    int volume=new_lenght*new_width*sidecut;

    cout<<"The Maximum Volume Is : "<<volume<<endl;
    return 0;
}
double sidecutreturn(double y,double x)
{
    double a,b,c,discriment,root1,root2,realpart,imagepart,cutside;
    a=12;
    b=-4*(x+y);
    c=x*y;
    discriment=b*b-4*a*c;

    if(discriment>0)
    {
        root1=(-b+sqrt(discriment))/(2*a);
        root2=(-b-sqrt(discriment))/(2*a);
    }
    else if (discriment==0)
    {
        root1=root2=-b/(2*a);
    }
    else
    {
        root1=0;
        root2=0;
    }

    if((y-2*root1)*(x-2*root1)*root1>(y-2*root2)*(x-2*root2)*root2)
    {
        cutside=root1;
    }
    else
    {
        cutside=root2;
    }
    
    return cutside;
}
