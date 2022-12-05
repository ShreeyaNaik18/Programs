import java.sql.*;

class Database 
{
    public static void main(String arg[]) throws Exception
    {
        
        Connection cobj = DriverManager.getConnection("jdbc:msql://localhost:3306/pp41","root","root");;
        
        Statement sobj = cobj.createStatement();
        
        ResultSet robj = sobj.executeQuery("select * from student");

        while(robj.next())
        {
            System.out.println("RID : "+robj.getInt("RID"));
            System.out.println("Name : "+robj.getString("Name"));    //in sql varchar is string thats why .getString
            System.out.println("City : "+robj.getString("City"));
            System.out.println("Marks : "+robj.getInt("Marks"));
        }

    }
}

//excute()     for create table
//excuteQuery()  for  select 
//excuteUpdate()   for delete/update/alter/insert
