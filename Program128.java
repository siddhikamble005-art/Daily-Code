import java.util.Scanner;

class Digit {
    public void SumDigit(int iNo) {
        int iDigit = 0;
        int iSum = 0;

        if (iNo < 0) {
            iNo = -iNo;
        }
        while (iNo != 0) {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iCount++;
        }
        return iCount;
    }
}

class Program128 {
    public static void main(String A[]) {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0;
        int iValue = 0;
        Digit digit = new Digit();

        System.out.println("Enter number");
        int iValue = scanner.nextInt();

        iRet = digit.SumDigit(iValue);
        System.out.println("Number of digits :" + iRet);
    }
}