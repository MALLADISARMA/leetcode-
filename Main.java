
    import java.util.LinkedList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<>();
        Scanner scanner = new Scanner(System.in);

        System.out.println("Enter elements (type 'done' to finish):");
        while (true) {
            String input = scanner.next();
            if (input.equals("done")) break;
            list.add(Integer.parseInt(input));
        }

        for (int i = 0; i < list.size() - 1; i += 2) {
            Integer temp = list.get(i);
            list.set(i, list.get(i + 1));
            list.set(i + 1, temp);
        }

        System.out.println("Linked list with swapped pairs: " + list);
    }
}


