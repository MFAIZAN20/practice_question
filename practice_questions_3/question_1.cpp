#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class AngleType{
    int degree;
    float min;
    char direction;
    public:
    AngleType(int degree_c=0,float min_c=0,char direction_c='N')
    {
        degree=degree_c;
        min=min_c;
        direction=direction_c;
    }
void setAngleType(){
    int a;
    float b;
    char x;
    cout<<"Please Enter The Value OF Degree :"<<endl;
    cin>>a;

    cout<<"Please Enter The Minutes :"<<endl;
    cin>>b;

    cout<<"Please Enter The Direction :"<<endl;
    cin>>x;


    degree=a;
    min=b;
    direction=x;
}
void getAngleType(){
    cout<<degree<<"\xF8"<<"'"<<min<<"'"<<direction;
}
};
int main(){
    AngleType cur_dir;
    cur_dir.setAngleType();
    cur_dir.getAngleType();

    return 0;
}