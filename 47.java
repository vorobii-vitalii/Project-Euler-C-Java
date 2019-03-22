import java.net.Inet4Address;
import java.util.ArrayList;
import java.util.List;

public class Main{


    private static Object[] getDividers(int number)
    {
        int x = number;
        ArrayList<Integer> listDiv=new ArrayList<Integer>();
        double sqrt = Math.sqrt(x);
        int currentValue = x;
        int multiplier = 2;
        while (currentValue > 1 && multiplier <= sqrt)
        {
            if (currentValue % multiplier == 0)
            {
                if(!listDiv.contains(multiplier))
                {
                    listDiv.add(multiplier);
                  //  System.out.print(multiplier + " ");
                }


                currentValue /= multiplier;
            }
            else if (multiplier == 2)
            {
                multiplier++;
            }
            else
            {
                multiplier += 2;
            }
        }
        return  listDiv.toArray();

    }
    public static void main(String [] args)
    {
        int counter_l=0;

        ArrayList<Object> ls=new ArrayList<Object>();

        for(int i=40;;i++)
        {
           Object [][] arr=new Object[3][];

            for(int j=i;j<i+3;j++)
            {
                arr[j-i]=getDividers(j);
            }

            for(int h=0;h<3;h++)
            {
                int counter=0;

                for(int w=0;w<arr[h].length;w++)
                {
                    Object elem=arr[h][w];

                    int count=0;

                    for(int hh=0;hh<3;hh++)
                    {
                        if(hh==h)
                        {

                            break;
                        }
                        Boolean hasItem=false;

                        for(int ww=0;ww<arr[hh].length;ww++)
                        {
                            if(arr[hh][ww]==elem)
                            {
                                hasItem=true;
                                break;
                            }
                        }

                        if(hasItem==false)
                        {
                            count++;
                        }

                    }

                    if(count==2)
                    {
                        counter++;
                        ls.add(i);
                     //   System.out.println(i);
                    }

                }

                if(counter==2)
                {
                    counter_l++;
                }
            }

            if(counter_l>=3)
            {
                System.out.print(ls);
                break;
            }
        }

    }
}