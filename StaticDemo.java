class StaticDemo
{
    static
    {
        System.out.println("Inside static block of StaticDemo class which contains main");
    }
    public StaticDemo()
    {
        System.out.println("Inside the Constructor of StaticDemo");
    }
   public static void main (String arg[]) 
   {
    System.out.println("Inside Main");
    System.out.println("Value of Static iNo3 : " +Demo.iNo3);     //Demo::iNo3
    System.out.println("Value of Static iNo4 : " +Demo.iNo4);     //Demo::iNo4
    
    Demo.Gun();                //Demo::Gun();
    Demo obj1 = new Demo();
    Demo obj2 = new Demo();

    obj1.Fun();

   }
}

class Demo
{
    public int iNo1;              //Non Static Characteristics
    public int iNo2;             //Non Static Characteristics       
    public static int iNo3;        //Static Characteristics
    public static int iNo4;       //Static Characteristics
    
    public Demo()         //Default Constructor
    {
       System.out.println("Inside Default constructor");
       iNo1 = 11;
       iNo2 = 21;
    }
    static                     //Static block
    {
       System.out.println("Inside static block of Demo");
       iNo3 = 51;
       iNo4 = 101;
    }
    public void Fun()          //non static method
    {
        //Static method can access static as well as non static data
       System.out.println("Inside non static method Fun");
       System.out.println("Value of  iNo1 : " +this.iNo1);
       System.out.println("Value of  iNo2 : " +this.iNo2);
       System.out.println("Value of  iNo3 : " +this.iNo3);
       System.out.println("Value of  iNo4 : " +this.iNo4);

      
    }
    public static void Gun()    //Static method
    {
        //Static method can access only static data 
        //we cannot use this keyword in static method
       System.out.println("Inside  static method gun");
       //System.out.println("Value of  iNo1 : " +iNo1);
       //System.out.println("Value of  iNo2 : " +iNo2);
       System.out.println("Value of  iNo3 : " +iNo3);
       System.out.println("Value of  iNo4 : " +iNo4);
      
    }
    


}
