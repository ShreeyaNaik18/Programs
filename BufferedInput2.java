import java.io.*;

class BufferedInput
{
    public static void main(String A[]) throws IOException
    {
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
                
                          //or

        //BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
        String Name = null;
        int Age = 0;
        float Marks = 0.0f;

        System.out.println("Enter your name : ");
        Name = bobj.readLine();

        System.out.println("Enter your age : ");
        Age = Integer.parseInt(bobj.readLine());   //static method
        
        //Integer is wrapper class of int

        System.out.println("Enter your marks : ");
        Marks = Float.parseFloat(bobj.readLine());   //static method
       
        System.out.println("Name : "+Name);
        System.out.println("Age : "+Age);
        System.out.println("Marks : "+Marks);

    }
}
