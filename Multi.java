 class Multi
{
    public static void main (String arg[])
    {   
        //Arr is 2 dimensional array which contains 3 one dimensional array,
        //each one dimensional array contains 4 elements,
        //each element is of type integer

        //Allowed only in C , C++
        //int  Arr[3][4] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};

        //Allowed in only Java
        int  Arr[][] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};

        System.out.println(Arr.length);     
        System.out.println(Arr[0].length);  
        System.out.println(Arr[1].length);  
        System.out.println(Arr[2].length);  
        System.out.println(Arr[0][1]);      
        System.out.println(Arr[0][0]);   
        System.out.println(Arr[1][1]);     
        System.out.println(Arr[1][3]);      
        System.out.println(Arr[1][2]);      
        System.out.println(Arr[2][1]);      
    }
}
