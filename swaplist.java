import java.util.Scanner;

// Definition for singly-linked list node
class ListNode {
    int val;
    ListNode next;

    ListNode(int val) {
        this.val = val;
    }
}

public class swaplist {
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prev = dummy;

        while (prev.next != null && prev.next.next != null) {
            ListNode first = prev.next;
            ListNode second = prev.next.next;

            first.next = second.next;
            second.next = first;
            prev.next = second;

            prev = first;
        }

        return dummy.next;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Creating the linked list from user input
        System.out.print("Enter the number of elements in the linked list: ");
        int n = scanner.nextInt();
        System.out.println("Enter the elements of the linked list: ");
        ListNode dummy = new ListNode(0);
        ListNode prev = dummy;
        for (int i = 0; i < n; i++) {
            int val = scanner.nextInt();
            prev.next = new ListNode(val);
            prev = prev.next;
        }

        // Swapping pairs in the linked list
        swaplist solution = new swaplist();
        ListNode swappedList = solution.swapPairs(dummy.next);

        // Printing the swapped linked list
        System.out.println("Swapped linked list:");
        while (swappedList != null) {
            System.out.print(swappedList.val + " ");
            swappedList = swappedList.next;
        }

        scanner.close();
    }
}
