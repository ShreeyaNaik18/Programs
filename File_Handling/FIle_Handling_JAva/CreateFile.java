import java.io.*;

class CreateFile
{
    public static void main(String arg[]) throws Exception
    {
        File fobj = new File("Marvellous.Txt");
        
        if(fobj.createNewFile())
        {
            System.out.println("File created Successfully");
        }
        else
        {
            System.out.println("Unable to create the file");
        }

    }
}