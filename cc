public class Main {
    public static void main(String[] args) {
        // Credit card balance
        double creditCardBalance = 5000.0;

        double interestRate = 17.0;

        double monthlyInterestRate = interestRate / 12;

        double interestDueAfterOneMonth = creditCardBalance * monthlyInterestRate;

        double interestDueAfterTwoMonths = (creditCardBalance + interestDueAfterOneMonth)
                * monthlyInterestRate;

        System.out.println("Interest due after one month: $" + interestDueAfterOneMonth);
        System.out.println("Interest due after two months: $" + interestDueAfterTwoMonths);
    }
}
