public class Main {
    public static void main(String[] args) {

        int price = 195;
        int quantity = 1;
        double totalPrice = price * quantity;
        double discount = 0.50;
        double discountedPrice = totalPrice * discount;
        double netPrice = totalPrice - discountedPrice;

        System.out.println("Product Name: Iphone");
        System.out.println("Quantity: " + quantity);
        System.out.println("Total Price: $"+ price);
        System.out.println("Discounted Price (50% off): $" + discountedPrice);
        System.out.println("Net Price after Discount: $" + netPrice);

        
    }
}

