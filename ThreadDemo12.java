//count even and odd by using thread
import java.util.*;

class Data  //the common resource for the both threads even and odd
{
    public int Arr[];    //characteristic reference of Array
    public Data(int size)   //parameterized constructor
    {
        Arr = new int[size];     //constructor is used to allocate the resources...this is resources
    }

    protected void finalize()  //to deallocate the memory
    {
        Arr = null;
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter numbers");

        for(int i = 0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }
}
class DemoEven extends Thread
{
    public Data dobj;
       public DemoEven(Data obj)
       {
        dobj = obj;
       }
    public void run()
    {
       for(int i = 0; i < dobj.Arr.length; i++)
       {
        if(dobj.Arr[i] % 2 == 0)
        {
            System.out.println("Even number is : "+dobj.Arr[i]);
        }
       }
      
    }
}
class DemoOdd extends Thread
{
    public Data dobj;
       public DemoOdd(Data obj)
       {
        dobj = obj;
       }
    public void run()
    {
       for(int i = 0; i < dobj.Arr.length; i++)
       {
        if(dobj.Arr[i] % 2 != 0)
        {
            System.out.println("Odd number is : "+dobj.Arr[i]);
        }
       }
      
    }
}
class ThreadDemo12 
{
   public static void main(String A[]) throws InterruptedException
   {
    Data obj1 = new Data(10);  
    obj1.Accept();

    DemoEven eobj = new DemoEven(obj1);   //Composition ...coz without inhert referes the data of data obj1
    DemoEven oobj = new DemoEven(obj1);   //Composition ...coz without inhert referes the data of data obj1

    Thread t1 = new Thread(eobj);
    Thread t2 = new Thread(oobj);

    
    t1.start();
    t2.start();
    
    t1.join();
    t2.join();  //we can also do try catch here instead of thorws

   } 
}
