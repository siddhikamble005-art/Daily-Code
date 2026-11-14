import java.util.Scanner;

class Digit {
    public void CountDigit(int iNo) {
        int iDigit = 0;
        int iCount = 0;

        for (iCount = 0; iCount <= iNo; iCount++) {
            while (iNo != 0) {
                iDigit = iNo % 10;
                iNo = iNo / 10;
                System.out.println(iCount);
            }
        }
    }
}

class Program126 {
    public static void main(String A[]) {
        Scanner scanner = new Scanner(System.in);
        Digit digit = new Digit();

        System.out.println("Enter number");
        int iValue = scanner.nextInt();

        digit.CountDigit(iValue);
    }
}