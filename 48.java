import java.math.BigInteger;

public class Main{

    private static void getSumPow(int from,int to)
    {
        BigInteger number=BigInteger.valueOf(0);

        for(int i=from;i<=to;i++)
        {
            BigInteger curr=new BigInteger(Integer.toString(i));
            curr=curr.pow(i);
            number=number.add(curr);
        }

       System.out.print(number.toString());
    }

    public static void main(String[] argc)
    {
        getSumPow(1,10);
    }
}
