import java.util.ArrayList;

public class Main {
    public static ArrayList<Long> primeNumbers;

    public static void solve() {
        for (long j = 7;j<300; j+=2) {

            for (long i = j-1; i>2; i--) {
                Boolean shouldAdd = true;

                for (long a : primeNumbers) {

                    if ((i * i) < a) {
                        break;
                    }

                    if (i % a == 0) {
                        shouldAdd = false;
                        break;
                    }
                }

                if (shouldAdd == true) {
                    System.out.println(i+" is prime");
                    primeNumbers.add(i);
                }

            }

            Boolean canBeWritten=false;

            for (long a : primeNumbers) {

                if ((j-2) < a) {
                    break;
                }

                long expression=0;

                for(int e=1;;e++)
                {
                    expression=a+(2*(e*e));
                    if(expression>j)
                    {
                        System.out.println(expression+" with square of "+e+" prime "+a+" num of j^ "+j+" cannot be written");
                        break;
                    }
                    else if(expression==j)
                    {
                        System.out.println(expression+" with square of "+e+" prime "+a+" num of j^ "+j+" can be written");
                        canBeWritten=true;
                        break;
                    }
                }

                if(canBeWritten==true)
                {
                    break;
                }
            }

            if(canBeWritten==true)
            {
                System.out.println(j+" can be written");
            }
            else{
                System.out.println(j+" cannot be written");
            }
        }


    }


    public static void main(String[] args) {
        primeNumbers = new ArrayList<Long>();
        long num2 = 2;
        primeNumbers.add(num2);

        solve();

    }
}
