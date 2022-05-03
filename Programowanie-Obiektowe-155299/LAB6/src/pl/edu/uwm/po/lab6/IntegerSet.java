package pl.edu.uwm.po.lab6;

public class IntegerSet
{
    private final boolean[] zbiorLiczb;

    public IntegerSet()
    {
        this.zbiorLiczb = new boolean[100];
    }

    public static IntegerSet union(IntegerSet a, IntegerSet b)
    {
        IntegerSet nowyZbior = new IntegerSet();
        for (int i=0;i<100;i++)
        {
            if(a.zbiorLiczb[i] || b.zbiorLiczb[i])
                nowyZbior.zbiorLiczb[i]=true;
        }
        return nowyZbior;
    }

    public static IntegerSet intersection(IntegerSet a, IntegerSet b)
    {
        IntegerSet nowyZbior = new IntegerSet();
        for (int i=0;i<100;i++)
        {
            if(a.zbiorLiczb[i] && b.zbiorLiczb[i])
                nowyZbior.zbiorLiczb[i]=true;
        }
        return nowyZbior;
    }

    public void insertElement(int a)
    {
        this.zbiorLiczb[a-1]=true;
    }

    public void deleteElement(int a)
    {
        this.zbiorLiczb[a-1]=false;
    }

    @Override
    public String toString()
    {
        StringBuilder numbers = new StringBuilder();
        for(int i=0;i<100;i++)
        {
            if(this.zbiorLiczb[i])
            {
                numbers.append(i+1);
                numbers.append(" ");
            }
        }
        return numbers.toString();
    }

    public boolean equals(IntegerSet a)
    {
        return this.toString().equals(a.toString());
    }
}
