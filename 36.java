class Main{
    public static void main(String[] args)
    {
        long MAX=1000000;

        for(long i=1;i<=MAX;i++)
        {
            String currentNum=Long.toString(i,2);
            //System.out.println(currentNum);
            String[] currArrayNum=currentNum.split("");

            int rangeLeft=0;
            int rangeRight=currArrayNum.length-1;

            while(currArrayNum[rangeLeft]!="1") {

                rangeLeft++;

                if(rangeLeft==currArrayNum.length)
                {
                    break;
                }
            }

            while(currArrayNum[rangeRight]!="1")
            {
                rangeRight--;

                if(rangeRight<0)
                {
                    break;
                }
            }


            Boolean isPolindrome=true;

            for(int j=rangeLeft,h=rangeRight;j<rangeRight && h >=rangeLeft;j++,h--)
            {
                if(currArrayNum[j]!=currArrayNum[h])
                {
                    isPolindrome=false;
                    break;
                }
            }

            if(isPolindrome==true)
            {
                System.out.println(currentNum+"\t is Polindrome");
            }


        }
    }
}