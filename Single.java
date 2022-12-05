/*
 class Object  -> inbuilt parent class so by default this program is 
                  is Multilevel inheritance bt as a programmer view 
                  it is single level.
                  in Object all types are methods are there
    {
        //Code
    }
 */
class Base        //   class Base Extends Object
{
    public int A, B;       

    public Base()          
    {
        System.out.println("Base Constructor");
        this.A = 10;
        this.B = 20; 
    }
    public void Fun()      //Defination
    {
        System.out.println("Base Fun"); 
    }
    public void Gun()    //Defination
    { 
        System.out.println("Base Gun"); 
    }
    public void Fun(int iNo)     //Overlooaded Defination
    {
        System.out.println("Base Fun with one integer"); 
    }
}
class Derived extends Base      //Class Derived : public Base
{
    public int X, Y;
    public Derived()
    {
        System.out.println("Derived Constructor");  
        this.X = 30;
        this.Y = 40;
    }
    public void Sun()     //Defination
    {
        System.out.println("Derived Sun"); 
    }
    //Runtime Dispatched method ...bcoz according to java the is no virtual explicitly it gets compiled internally
    public void Gun()     //Overrided Defination
    {
        System.out.println("Derived Gun"); 
    }
}
class Single 
{
    public static void main(String arg[])
    {
        Base bobj1 = new Base();        //No Casting

        bobj1.Fun();

        Derived dobj1 = new Derived();  //No Casting

        dobj1.Fun();                    //Base Fun
        dobj1.Fun(11);             //Base Fun
        dobj1.Gun();                   //Derived Gun 
        dobj1.Sun();                   //Derived Sun

        Base bobj2 = new Derived();     //Up Casting

        bobj2.Fun();                    //Base Fun
        bobj2.Fun(11);             //Base Fun
        bobj2.Gun();                   //Derived Gun
        //bobj2.Sun();                 //Cannot access 

         //Derived dobj = new Base();      //DownCasting -> not Allowed

        }
}
