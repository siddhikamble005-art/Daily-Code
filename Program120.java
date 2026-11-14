import java.util.Scanner;

class Digit {
    public void DisplayDigit() {
        int iNo = 175902;
        System.out.println("numberis :" + iNo);

        System.out.println(iNo % 10);
        iNo = iNo / 10;
        System.out.println("numberis :" + iNo);

        System.out.println(iNo % 10);
        iNo = iNo / 10;
        System.out.println("numberis :" + iNo);

        System.out.println(iNo % 10);
        iNo = iNo / 10;
        System.out.println("numberis :" + iNo);

        System.out.println(iNo % 10);
        iNo = iNo / 10;
        System.out.println("numberis :" + iNo);

        System.out.println(iNo % 10);
        iNo = iNo / 10;
        System.out.println("numberis :" + iNo);

        System.out.println(iNo % 10);
        iNo = iNo / 10;
        System.out.println("numberis :" + iNo);

    }
}

class Program120

    public static void main(String A[]) {
        
        Digit digit = new Digit();

        digit.DisplayDigit();
}