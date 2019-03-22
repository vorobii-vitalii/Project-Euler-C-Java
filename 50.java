import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;

public class Main
{
    public static ArrayList<Long> primeNumbers;

    private static int getSumOfSequencePrimeNumbers(long range)
    {
        int max_sequence_primes_sum=0;
        for(long i=3;i<=range;i++)
        {
            Boolean shouldAdd=true;

            for (long a:primeNumbers) {

                if( (i*i)<a  )
                {
                    break;
                }

                if( i%a==0 )
                {
                    shouldAdd=false;
                    break;
                }
            }

            if(shouldAdd==true)
            {
                primeNumbers.add(i);

                Object[] arr=primeNumbers.toArray();

                int max_sequence=0;

                long count_num=0;

                System.out.print(i+"  iterating : ");

                for(int j=0;j<arr.length;j++)
                {
                    count_num+=(long)arr[j];

                    System.out.print(count_num+" ");

                    if(count_num==i)
                    {
                        System.out.print("  true");
                        max_sequence++;
                        break;


                    }
                    else if(count_num>i)
                    {
                        max_sequence=0;
                        break;
                    }
                    else{
                        max_sequence++;
                    }

                }

                if(max_sequence>max_sequence_primes_sum)
                {
                    max_sequence_primes_sum=max_sequence;
                }
                System.out.println();


            }

        }

        return max_sequence_primes_sum;
    }



    public static void main(String [] args)
    {
        primeNumbers=new ArrayList<Long>();
        long num2=2;
        primeNumbers.add(num2);

        System.out.println(getSumOfSequencePrimeNumbers(10000000));

    }
}