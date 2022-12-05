import java.sql.*;

class Database 
{
    public static void main(String arg[]) throws Exception
    {
        String URL = "jdbc:msql://localhost:3306/pp41";     //ip is local host : portal number of Sql mariadb
        String Username = "root";       //by defalut username of sql
        String Password = "root";      //by default password of sql
        String Query = "select * from student";  
        //we can use any query here to do operation on sql table 
        
        Connection cobj = DriverManager.getConnection(URL,Username,Password);
        
        Statement sobj = cobj.createStatement();
        
        ResultSet robj = sobj.executeQuery(Query);

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
