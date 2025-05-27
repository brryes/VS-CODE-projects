import java.util.ArrayList;
import java.util.Scanner;

class AlumniInformation {
    private ArrayList<AlumniInformationEntry> alumniList;

    // Constructor to initialize the alumni list
    public AlumniInformation() {
        alumniList = new ArrayList<>();
    }

    // Add an alumni entry
    public void addEntry(AlumniInformationEntry entry) {
        if (alumniList.size() < 100) {
            alumniList.add(entry);
            System.out.println("Alumni entry added.");
        } else {
            System.out.println("Maximum limit reached. Cannot add more entries.");
        }
    }

    // Delete an alumni entry by name
    public void deleteEntry(String name) {
        AlumniInformationEntry entryToRemove = null;
        for (AlumniInformationEntry entry : alumniList) {
            if (entry.getName().equalsIgnoreCase(name)) {
                entryToRemove = entry;
                break;
            }
        }
        if (entryToRemove != null) {
            alumniList.remove(entryToRemove);
            System.out.println("Alumni entry removed.");
        } else {
            System.out.println("Alumni not found.");
        }
    }

    // View all alumni entries
    public void viewAllEntries() {
        if (alumniList.isEmpty()) {
            System.out.println("No alumni records available.");
        } else {
            for (AlumniInformationEntry entry : alumniList) {
                entry.displayInfo();
                System.out.println("--------------------------");
            }
        }
    }

    // Update an alumni entry by name
    public void updateEntry(String name, String jobTitle, String companyName, String emailAddress) {
        for (AlumniInformationEntry entry : alumniList) {
            if (entry.getName().equalsIgnoreCase(name)) {
                entry.setJobTitle(jobTitle);
                entry.setCompanyName(companyName);
                entry.setEmailAddress(emailAddress);
                System.out.println("Alumni entry updated.");
                return;
            }
        }
        System.out.println("Alumni not found.");
    }

    // Main method to test the program
    public static void main(String[] args) {
        AlumniInformation alumniInfo = new AlumniInformation();
        Scanner scanner = new Scanner(System.in);

        // Sample loop for adding, deleting, viewing, and updating entries
        boolean exit = false;
        while (!exit) {
            System.out.println("\n1. Add Alumni Entry\n2. Delete Alumni Entry\n3. View All Entries\n4. Update Alumni Entry\n5. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine(); // consume newline

            switch (choice) {
                case 1:
                    System.out.print("Enter Name: ");
                    String name = scanner.nextLine();
                    System.out.print("Enter Job Title: ");
                    String jobTitle = scanner.nextLine();
                    System.out.print("Enter Company Name: ");
                    String companyName = scanner.nextLine();
                    System.out.print("Enter Email Address: ");
                    String emailAddress = scanner.nextLine();
                    AlumniInformationEntry newEntry = new AlumniInformationEntry(
                        name, jobTitle, companyName, emailAddress
                    );
                    alumniInfo.addEntry(newEntry);
                    break;
                case 2:
                    System.out.print("Enter Name of Alumni to Delete: ");
                    String nameToDelete = scanner.nextLine();
                    alumniInfo.deleteEntry(nameToDelete);
                    break;
                case 3:
                    alumniInfo.viewAllEntries();
                    break;
                case 4:
                    System.out.print("Enter Name of Alumni to Update: ");
                    String nameToUpdate = scanner.nextLine();
                    System.out.print("Enter New Job Title: ");
                    String newJobTitle = scanner.nextLine();
                    System.out.print("Enter New Company Name: ");
                    String newCompanyName = scanner.nextLine();
                    System.out.print("Enter New Email Address: ");
                    String newEmailAddress = scanner.nextLine();
                    alumniInfo.updateEntry(nameToUpdate, newJobTitle, newCompanyName, newEmailAddress);
                    break;
                case 5:
                    exit = true;
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }

        scanner.close();
    }
}
