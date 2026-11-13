
import java.util.Scanner;

class program57 {
    public static void main(String A[]) {
        int iValue = 0;
        Scanner scanner = new Scanner(System.in);
        iValue = scanner.nextInt();

        System.out.println("Enter the frequency : ");

        Iteration iteration = new Iteration();
        iteration.Display(iValue);
    }
}

class Iteration {
    public void Display(int iNo) {
        int iCnt = 0;

        for (iCnt = 1; iCnt <= iNo; iCnt++) {
            System.out.println("Jay Ganesh...");
        }
    }
}