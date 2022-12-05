class Base
{
    public int A;
    public int B;
    public Base(int iNo1, int iNo2)
    {
        this.A = iNo1;
        this.B = iNo2;
    }
    public void Fun()
    {
       System.out.println("Inside the Base Fun");
       System.out.println("Value of A from Fun method is : "+this.A);
    }
}
class Derived extends Base
{
    public int X;
    public int Y;
    public Derived(int i, int j, int k, int l)
    {
        super(k, l);      //1st usecase   //Base(51, 101)
        this.X = i;
        System.out.println("Value of i is : "+i);
        this.Y = j;
        System.out.println("Value of j is : "+j);
    }
    public void gun()
    {
        System.out.println("Value of A from gun method is : "+ super.A);   //2nd usecase
        super.Fun();       //3rd usecase
    }
}
class SuperDemo 
{
    public static void main(String a[])
    {
    Derived dobj = new Derived(11,21,51,101);
    dobj.gun();
    }
}
