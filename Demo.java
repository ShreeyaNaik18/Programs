// Class Definition 
class Maths           //class Maths extends Object
{
    public int iNo1;       //Characteristics
    public int iNo2;       //Characteristics

    
    public Maths()               //Default Construcutor
     {
        System.out.println("Inside Default Constructor");
        iNo1 = 0;
        iNo2 = 0;
     }
     public Maths(int a , int b)      //Parameterized Constructor
     {
        System.out.println("Inside Parameterized Constructor");
        iNo1 = a;
        iNo2 = b;
     }
     public int Addition()      //Behaviour /Method
     {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
     }
     public int Substraction()    //Behaviour /Method
     {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
     }
}
//End of the Maths class

class Demo              //class Demo extends Object
{
  public static void main(String arg[])
   {
       System.out.println("Inside the Main Function");  

       Maths mobj1 = new Maths(); 
       Maths mobj2 = new Maths(10,11);

       int iRet = 0;

       iRet = mobj1.Addition();
       System.out.println("Addition is : " +iRet); 
       
       iRet = mobj2.Addition();
       System.out.println("Addition is : " +iRet);

        iRet = mobj2.Substraction();
       System.out.println("Substraction is : " +iRet);


   }
}
