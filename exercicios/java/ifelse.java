import java.util.Scanner;

public class ifelse{
    public static void main(String[] args){
        System.out.print("input your age: ");
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int age = Integer.parseInt(s);
        
        if(age >= 18){
            System.out.print("input your favorite food: ");
            String food = sc.nextLine();
            if(food.equals("pizza")){
                System.out.println("mine too");
            }
            else{
                System.out.println("not mine");
            }
        }
        else if(age>=13){
            System.out.println("you are a teenager");
        }
        else{
            System.out.println("you are not a teenager or an adult");
        }
    }
}
