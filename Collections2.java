import java.util.*;

class Collections2
{
   public static void main(String arg[]) 
   { 
    LinkedList <String> lobj = new LinkedList <String>();
    
    lobj.add("Abhishek");
    lobj.add("Shreeya");
    lobj.add("Sanskruti");
    lobj.add("Nakul");
    lobj.add("Hema");

   System.out.println("Elements of the LinkedList are : "+lobj);
   
    lobj.addFirst("Pooja");
    System.out.println("Elements of the LinkedList are : "+lobj);
     
    lobj.addLast("Sneha");
    System.out.println("Elements of the LinkedList are : "+lobj);

    Iterator iobj = lobj.iterator();
    System.out.println("Data using iterator : ");
    
    while(iobj.hasNext())
    {
        System.out.println(iobj.next());
    }
    
    if(lobj.contains("Nakul"))
    {
        System.out.println("Nakul is present in LL");
    }
    else
    {
        System.out.println("Nakul is not present in LL");
    }

    lobj.remove();
    System.out.println("Elements of the LinkedList are : "+lobj);

    lobj.remove();
    System.out.println("Elements of the LinkedList are : "+lobj);

    lobj.remove(0);
    System.out.println("Elements of the LinkedList are : "+lobj);

    lobj.removeLast();
    System.out.println("Elements of the LinkedList are : "+lobj);

    System.out.println("Number of Elements are : "+lobj.size());

    lobj.set(1,"Abdya");
    System.out.println("Number of Elements are : "+lobj);

    lobj.clear();
    System.out.println("Number of Elements are : "+lobj);
}
}

