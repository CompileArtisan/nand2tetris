import java.util.Scanner;

public class Java22_Fixing_buffer_issue {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = scan.nextLine();
        System.out.print("Enter your age: ");
        int age = scan.nextInt();
        scan.nextLine();
        System.out.print("Enter your favourite food: ");
        String food = scan.nextLine();
        System.out.println("You're "+name+", a "+age+" year old who likes "+food+".");
    }
}