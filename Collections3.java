import java.util.*;

class Book
{
    public String Name;
    public int Price;

    public Book(String s,int i)
    {
        this.Name = s;
        this.Price = i;
    }
    public void Display()
    {
        System.out.println("Book name :"+this.Name+" Price : "+this.Price);
    }

}

class Collections3 
{
    public static void main(String arg[])
    {
        //book is class crerated by us
      LinkedList <Book>lobj = new LinkedList<Book>();

      lobj.add(new Book("Let us C",400));
      lobj.add(new Book("Data Structures",580));
      lobj.add(new Book("C++ Programming",980));
      lobj.add(new Book("Angular web development",790));

      Iterator iobj = lobj.iterator();

      Book bRef = null;

      while(iobj.hasNext())
      {
        bRef = (Book)iobj.next();

         bRef.Display();
      }
       lobj.clear();
    }
    
}
