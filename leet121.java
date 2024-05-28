import java.util.*;
import java.io.*;
import java.sql.Array;
public class leet121{
    public static void main(String[] args){
      Scanner a=new Scanner(System.in);
      System.out.println("print list of prices: (enter 'done' after entering all the prices)");
      List<Integer> prices=new ArrayList<>();
      while(true){
        String in=a.next();
        if(in.equals("done")) break;
        prices.add(Integer.parseInt(in));
      }
      if(prices.isEmpty()) System.out.println(0);
      int[] price=prices.stream().mapToInt(i->i).toArray();
      int min_price=price[0];
      int max_price=0;
      for(int i=0;i<price.length;i++){
        if(price[i]<min_price){
            min_price=price[i];
        }
        else{
            max_price=Math.max(max_price,price[i]-min_price);
        }
      }
      System.out.println(max_price);



    }
}