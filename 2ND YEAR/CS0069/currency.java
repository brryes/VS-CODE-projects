import java.util.Scanner;

public class currency {
    public static void main(String[] args) {
        Scanner scanner = new Scanner (System.in);

        double usER = 1.0 / 43.33089;
        double euroER = 0.734719 / 43.33089;
        double yuanER = 6.346934 / 43.33089;
        double korunaER = 18.77263 / 43.33089;
        double kroneER = 5.449007 / 43.33089;
        double sheqelER = 3.726334 / 43.33089;
        double dinarER = 0.274588 / 43.33089;

        System.out.print("Enter Philippine peso: ");
        double peso = scanner.nextDouble();
        
        double usd = peso * usER;
        double euro = peso * euroER;
        double yuan = peso * yuanER;
        double koruna = peso * korunaER;
        double krone = peso * kroneER;
        double sheqel = peso * sheqelER;
        double dinar = peso * dinarER;

        System.out.println (" The amount's equivalent to:");
        System.out.println("US Dollar is : " + usd);
        System.out. println ("Euro: " + euro) ;
        System.out.println("Yuan " + yuan) ;
        System. out. println ("Koruna : " + koruna) ;
        System.out.println( "Krone " + krone);
        System.out. println ("Sheqel " + sheqel);
        System.out.println ("Dinar" + dinar);  
        
        scanner.close ();

    }
}
   