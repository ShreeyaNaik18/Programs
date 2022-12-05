
class EqualsDemo
{
    public static void main(String A[])
    {
      String s1 = "Hello";
      String s2 = "Hello";
      
      System.out.println("Hashcode of the s1:"+s1.hashCode());   //1001
      System.out.println("Hashcode of the s2:"+s2.hashCode());   //1001
    
      //its a deep comparison and it will compare the data with data
      //for equal method we have to use string
      if(s1.equals(s2))       //if("Hello" == "Hello" ) 
      {
        System.out.println("Objects are Same");
      }
      else
      {
        System.out.println("Objects are Different");
      }

      //its a shallow comparison and it will compare the hashcode with hashcode
      if(s1 == s2)    //if(1001 == 1001)
      {
        System.out.println("Objects are Same");
      }
      else
      {
        System.out.println("Objects are Different");
      }
    }
}

