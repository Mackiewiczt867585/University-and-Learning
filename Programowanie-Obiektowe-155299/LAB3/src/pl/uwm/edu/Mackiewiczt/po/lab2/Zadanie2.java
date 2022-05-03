package pl.uwm.edu.Mackiewiczt.po.lab2;

import java.util.Random;

public class Zadanie2 {

    int s=0,m=0;
    public static void generuj(int tab[],int n,int min,int max)
    {
        for(int i=0;i<n;i++)
        {
            tab[i]=(int)(Math.random() * (max - min + 1) + min);
        }
    }
    public void print(int tab[])
    {
        for(int i=0;i<tab.length;i++)
        {
            System.out.println("tab["+i+"]="+tab[i]);
        }
    }
    public int ileParzystych(int tab[])
    {
        for(int i=0;i<tab.length;i++)
        {
            if(tab[i]%2==0)
            {
                s+=1;
            }
        }
        return s;
    }
    public int ileNieparzystych(int tab[])
    {
            for(int i=0;i<tab.length;i++)
            {
                if(tab[i]%2==1||tab[i]%2==-1)
                {
                    s+=1;
                }
            }
        return s;
    }
    public int ileDodatnich(int tab[])
    {
        for(int i=0;i<tab.length;i++)
        {
            if(tab[i]>0)
            {
                s+=1;
            }
        }
        return s;
    }
    public int ileUjemnych(int tab[])
    {
        for(int i=0;i<tab.length;i++)
        {
            if(tab[i]<0)
            {
                s+=1;
            }
        }
        return s;
    }
    public int ileZerowych(int tab[])
    {
        for(int i=0;i<tab.length;i++)
        {
            if(tab[i]==0)
            {
                s+=1;
            }
        }
        return s;
    }
    public int ileMaksymalnych(int tab[])
    {
        m=tab[0];
        s=1;
        for(int i=1;i<tab.length;i++)
        {
            if(tab[i]==m)
            {
                s+=1;
            }
            if(tab[i]>m)
            {
                m=tab[i];
                s=1;
            }
        }
        return s;
    }
    public int sumaDodatnich(int tab[])
    {
        for(int i=1;i<tab.length;i++)
        {
            if(tab[i]>0)
            {
                s+=tab[i];
            }
        }
        return s;
    }
    public int sumaUjemnych(int tab[])
    {
        for(int i=1;i<tab.length;i++)
        {
            if(tab[i]<0)
            {
                s+=tab[i];
            }
        }
        return s;
    }
    public int dlugoscMaksymalnegoCiaguDodatnich(int tab[])
    {
        s=0;
        m=0;
        for(int i=0;i<tab.length;i++)
        {
            if(tab[i]>=0)
            {
                s+=1;
            }
            if(tab[i]<0)
            {
                if(s>m)
                {
                    m=s;
                }
                s=0;
            }
        }
        if(s>m)
        {
            m=s;
        }
        return m;
    }
    public void singum(int tab[])
    {
        for(int i=0;i<tab.length;i++)
        {
            if(tab[i]>=0)
            {
                tab[i]=1;
            }
            else
            {
                tab[i]=-1;
            }
        }
        print(tab);
    }
    public void odwrocCalosc(int tab[])
    {
        for(int i=0;i<tab.length/2;i++)
        {
            s=tab[i];
            tab[i]=tab[tab.length-1-i];
            tab[tab.length-1-i]=s;
        }
        print(tab);
    }
    public void odwrocFragment(int tab[],int lewy,int prawy)
    {
        m=0;
        for(int i=lewy;i<prawy;i++)
        {
            if(i>prawy/2)
            {
                break;
            }
            else
            {
                s = tab[lewy+m];
                tab[lewy+m] = tab[prawy-m];
                tab[prawy-m] = s;
            }
        }
        print(tab);
    }
}
