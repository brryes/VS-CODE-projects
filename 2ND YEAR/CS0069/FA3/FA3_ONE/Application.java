import java.util.ArrayList;
import java.util.Scanner;

class Animal {
    private String name;
    private int age;

    public Animal(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void talk() {
        System.out.println("I am an animal.");
    }
}

class Panda extends Animal {
    public Panda(String name, int age) {
        super(name, age);
    }

    @Override
    public void talk() {
        System.out.println("Panda: My name is " + getName() + " and I am " + getAge() + " years old.");
    }
}

class Zebra extends Animal {
    public Zebra(String name, int age) {
        super(name, age);
    }

    @Override
    public void talk() {
        System.out.println("Zebra: My name is " + getName() + " and I am " + getAge() + " years old.");
    }
}

class Monkey extends Animal {
    public Monkey(String name, int age) {
        super(name, age);
    }

    @Override
    public void talk() {
        System.out.println("Monkey: My name is " + getName() + " and I am " + getAge() + " years old.");
    }
}

class Owl extends Animal {
    public Owl(String name, int age) {
        super(name, age);
    }

    @Override
    public void talk() {
        System.out.println("Owl: My name is " + getName() + " and I am " + getAge() + " years old.");
    }
}

class Tiger extends Animal {
    public Tiger(String name, int age) {
        super(name, age);
    }

    @Override
    public void talk() {
        System.out.println("Tiger: My name is " + getName() + " and I am " + getAge() + " years old.");
    }
}

class Zoo {
    private ArrayList<Animal> animals = new ArrayList<>();

    public void addAnimal(Animal animal) {
        animals.add(animal);
        System.out.println(animal.getName() + " has been added to the zoo.");
    }

    public void removeAnimal(Animal animal) {
        animals.remove(animal);
        System.out.println(animal.getName() + " has been removed from the zoo.");
    }

    public void feedingTime() {
        System.out.println("Feeding time! All animals will talk:");
        for (Animal animal : animals) {
            animal.talk();
        }
    }
}

class Menu {
    private String[] menuItems;

    public Menu(String[] items) {
        this.menuItems = items;
    }

    public int displayMenu() {
        Scanner scanner = new Scanner(System.in);
        int choice = -1;

        while (choice < 1 || choice > menuItems.length) {
            System.out.println("Please select an option:");
            for (int i = 0; i < menuItems.length; i++) {
                System.out.println((i + 1) + ". " + menuItems[i]);
            }

            try {
                choice = Integer.parseInt(scanner.nextLine());
                if (choice < 1 || choice > menuItems.length) {
                    System.out.println("Invalid choice, please try again.");
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid input, please enter a number.");
            }
        }

        return choice;
    }
}

class Application {
    public static void main(String[] args) {
        Zoo zoo = new Zoo();
        Menu menu = new Menu(new String[]{"Add Panda", "Add Zebra", "Add Monkey", "Add Owl", "Add Tiger", "Feeding Time", "Exit"});
        Scanner scanner = new Scanner(System.in);
        boolean exit = false;

        while (!exit) {
            int choice = menu.displayMenu();

            switch (choice) {
                case 1:
                    zoo.addAnimal(new Panda("Syrax", 5));
                    break;
                case 2:
                    zoo.addAnimal(new Zebra("Marty", 7));
                    break;
                case 3:
                    zoo.addAnimal(new Monkey("Tatang", 3));
                    break;
                case 4:
                    zoo.addAnimal(new Owl("Drogon", 2));
                    break;
                case 5:
                    zoo.addAnimal(new Tiger("Vhagar", 10));
                    break;
                case 6:
                    zoo.feedingTime();
                    break;
                case 7:
                    exit = true;
                    System.out.println("Goodbye!");
                    break;
            }
        }
    }
}
