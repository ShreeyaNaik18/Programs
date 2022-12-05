#include<iostream>
using namespace std;

class Base
{    
    int X;          //by default it will be private access specifier
   public :
     int i;
   private :
     int j ;
   protected :
     int k;
    public :
     Base()      
     {
        i = 10;
        j = 20;
        k = 30;
        X = 40;
     }
     void Fun()
     {  
        cout<<"Value of public X : "<<X<<"\n";
        cout<<"Value of public i : "<<i<<"\n";
        cout<<"Value of private j : "<<j<<"\n";
        cout<<"Value of protected k : "<<k<<"\n";
     }
};

int main()
{
    Base Bobj;
        cout<<"Value of public i : "<<Bobj.i<<"\n";  //A
     //   cout<<"Value of private j : "<<Bobj.j<<"\n";  //NA
    //    cout<<"Value of protected k : "<<Bobj.k<<"\n";  //NA

    Bobj.Fun();

    return 0;
}