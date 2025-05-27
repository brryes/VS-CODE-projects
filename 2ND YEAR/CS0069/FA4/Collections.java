import java.util.*;

public class Collections {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int choice;

        do {
            System.out.println("\nChoose a collection to operate on:");
            System.out.println("1. LinkedList (Ordered, Allows Duplicates)");
            System.out.println("2. TreeSet (Sorted, Unique Elements)");
            System.out.println("3. ArrayDeque (Double-Ended Queue)");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    LinkedList<String> linkedList = new LinkedList<>();
                    linkedList.add("Red");
                    linkedList.add("Blue");
                    linkedList.add("Red");
                    System.out.println("LinkedList: " + linkedList);
                    linkedList.add(1, "Green");
                    System.out.println("Updated LinkedList: " + linkedList);
                    break;

                case 2:
                    TreeSet<Integer> treeSet = new TreeSet<>();
                    treeSet.add(30);
                    treeSet.add(10);
                    treeSet.add(20);
                    treeSet.add(10);
                    System.out.println("TreeSet (sorted): " + treeSet);
                    treeSet.add(25);
                    System.out.println("Updated TreeSet: " + treeSet);
                    break;

                case 3:
                    ArrayDeque<String> arrayDeque = new ArrayDeque<>();
                    arrayDeque.add("First");
                    arrayDeque.addLast("Second");
                    arrayDeque.addFirst("Zero");
                    System.out.println("ArrayDeque: " + arrayDeque);
                    System.out.println("Polling first element: " + arrayDeque.pollFirst());
                    System.out.println("Updated ArrayDeque: " + arrayDeque);
                    break;

                case 4:
                    System.out.println("Exiting the program...");
                    break;

                default:
                    System.out.println("Invalid choice. Please select 1, 2, 3, or 4.");
            }
        } while (choice != 4);

        scanner.close();
    }
}
