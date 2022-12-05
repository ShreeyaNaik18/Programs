import java.lang.*;    //Defalut package in java

class Demo
{
    public void fun()    //fun@0
    {
        System.out.println("Fun without parameters");
    }
    public void fun(int i)   //fun@1i
    {
        System.out.println("Fun with one interger as parameters");
    }
    public void fun(int i, int j)      //fun@2ii
    {
        System.out.println("Fun with two interger as parameters");
    }
    public void fun(double i)          //fun@1d
    {
        System.out.println("Fun with one double as parameters");
    }
}

class Overloading
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();
        dobj.fun();
        dobj.fun(11);
        dobj.fun(11,10);
        dobj.fun(1.23);
    }
}