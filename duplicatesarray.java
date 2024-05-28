import java.io.*;
import java.util.*;

public class duplicatesarray{
    public static void main(String[] args){
        Scanner a=new Scanner(System.in);
        Integer n=a.nextInt();
        Integer[] arr=new Integer[n];
        for(int i=0;i<n;i++){
            arr[i]=a.nextInt();
            System.out.println(" ");
        }//hashset sets does not allow duplicates
        Set<Integer> b=new HashSet<>(Arrays.asList(arr));
        Integer[] arr1=b.toArray(new Integer[0]);
        System.out.println("array without duplicates: "+Arrays.toString(arr1));

    }
}
