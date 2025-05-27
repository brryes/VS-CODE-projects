import java.util.ArrayList;

public class AddressBook {
    private ArrayList<AddressBookEntry> entries;

    public AddressBook() {
        this.entries = new ArrayList<>();
    }

    public void addEntry(AddressBookEntry entry) {
        if (entries.size() < 100) {
            entries.add(entry);
        } else {
            System.out.println("Address book is full!");
        }
    }

    public void deleteEntry(String name) {
        for (int i = 0; i < entries.size(); i++) {
            if (entries.get(i).getName().equals(name)) {
                entries.remove(i);
                System.out.println("Entry for " + name + " deleted.");
                return;
            }
        }
        System.out.println("No entry found for " + name);
    }

    public void viewAllEntries() {
        for (AddressBookEntry entry : entries) {
            System.out.println("-----");
            System.out.println("Name: " + entry.getName());
            System.out.println("Address: " + entry.getAddress());
            System.out.println("Telephone: " + entry.getTelephone());
            System.out.println("Email: " + entry.getEmail());
        }
    }

    public void updateEntry(String name, AddressBookEntry newEntry) {
        for (int i = 0; i < entries.size(); i++) {
            if (entries.get(i).getName().equals(name)) {
                entries.set(i, newEntry);
                System.out.println("Entry for " + name + " updated.");
                return;
            }
        }
        System.out.println("No entry found for " + name);
    }

    public static void main(String[] args) {
        AddressBook addressBook = new AddressBook();
        AddressBookEntry entry1 = new AddressBookEntry("John Doe", "123 Main St", "555-1234", "john@example.com");
        addressBook.addEntry(entry1);
        addressBook.viewAllEntries();

        AddressBookEntry updatedEntry = new AddressBookEntry("John Doe", "456 Elm St", "555-5678", "john_new@example.com");
        addressBook.updateEntry("John Doe", updatedEntry);
        addressBook.viewAllEntries();

        addressBook.deleteEntry("John Doe");
        addressBook.viewAllEntries();
    }
}
