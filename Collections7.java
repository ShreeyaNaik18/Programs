import java.util.*;

class Collections7
{
    public static void main(String arg[])
    {
        Stack <Character>sobj = new Stack<Character>();

        sobj.push('a');        
        sobj.push('b');
        sobj.push('c');
        sobj.push('d');
        sobj.push('e');

        System.out.println("Elemets of stack :"+sobj);

        System.out.println("Poped Elemets of stack :"+sobj.pop());
        
        System.out.println("Elemets of stack :"+sobj);
    }
}
