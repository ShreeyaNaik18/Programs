 class Base
 {
    public void fun()    //fun@0
    {
        System.out.println("Base Fun");
    }
    public void gun()   //gun@0
    {
        System.out.println("Base gun");
    }
     public void sun()   //sun@0
    {
     System.out.println("Base sun");
    }
}
 class Derived extends Base
 {
    public void fun()   //fun@0
    {
     System.out.println("Derived fun");
    }
    
    public void gun()   //gun@0
    {
     System.out.println("Derived gun");
    }
    public void run()   //run@0
    {
     System.out.println("Derived run");
    }
 }
class RMD
{
    public static void main(String arg[])
    {
        Base bobj = new Derived();     //upcasting
        bobj.fun();                    //Derived fun
        bobj.gun();                    //Derived gun
        bobj.sun();                    //Base Sun
        //bobj.run();                  //error
    }
}
/*
    Base bobj = new Base();
    Derived bobj = new Derived();
    Base bobj = new Derived();
    Derived bobj = new Base();
   
 */