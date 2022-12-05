import java.io.*;

class Write_File
{
    public static void main(String arg[]) throws Exception
    {
        //for writing data fileOutputStream is used ...and it is responsible to open the file first internally then write on it
        //it is only used to write the data 
        FileOutputStream fobj = new FileOutputStream("Marvellous.txt");
    
        String Data = "Marvellous Infosystems Pune";

        byte bdata[] = Data.getBytes();//it gets coverted into array of byte

        fobj.write(bdata);
        fobj.close();
    }
}