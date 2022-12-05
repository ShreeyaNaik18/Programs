//Case 4
//Multiple Inheritance
//Not Allowed
//it will generate ambiguity At line no 22
//Allowed in c++ not in java
class Demo
{
    int i;
    void fun()
    {

    }
}
class Hello
{
    int i;
    void fun()
    {
        
    }
}
class Marvellous extends Demo, Hello    //Error
{

}
