import java.io.*;

class Wrapper
{
    public static void main(String A[])
    {
        int no = 11;

        Integer iobj = new Integer(no);    //Boxing of the Primitive datatpye

        System.out.println(no);
        System.out.println(iobj);

        int x = iobj;                    //unboxing of the wrapper class 
        System.out.println(x);

    } 
}
