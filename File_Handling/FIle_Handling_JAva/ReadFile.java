import java.io.*;

class ReadFile
{
    public static void main(String arg[]) throws Exception
    {
       FileInputStream fobj = new FileInputStream("Marvellous.txt");
       int i = 0;  //return value will be integer 

       while((i = fobj.read()) != -1)
       {
        //System.out.println((char)i);
        System.out.print((char)i);  //byte to char conversion 
       }
       System.out.println();
       fobj.close();
    }
}