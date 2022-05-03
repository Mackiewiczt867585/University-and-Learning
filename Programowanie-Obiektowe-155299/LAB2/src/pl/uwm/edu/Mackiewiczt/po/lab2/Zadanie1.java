package pl.uwm.edu.Mackiewiczt.po.lab2;

import java.util.Scanner;

public class Zadanie1 {

    Scanner inp = new Scanner(System.in);
    double x=0,s,sm;

    public double fct(int n)
    {
        s=1;
        for(int i=1;i<=n;i++)
        {
            s*=i;
        }
        return s;
    }

    public void a(int n)
    {
        s=0;
        System.out.println("Zadanie 1a");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=x;
        }
        System.out.println("a="+s);
    }

    public void b(int n)
    {
        s=1;
        System.out.println("Zadanie 1b");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s*=x;
        }
        System.out.println("b="+s);
    }
    public void c(int n)
    {
        s=0;
        System.out.println("Zadanie 1c");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=Math.abs(x);
        }
        System.out.println("c="+s);
    }
    public void d(int n)
    {
        s=0;
        System.out.println("Zadanie 1d");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=Math.sqrt(Math.abs(x));
        }
        System.out.println("d="+s);
    }
    public void e(int n)
    {
        s=1;
        System.out.println("Zadanie 1e");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s*=Math.abs(x);
        }
        System.out.println("e="+s);
    }
    public void f(int n)
    {
        s=0;
        System.out.println("Zadanie 1f");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=Math.pow(x,2);
        }
        System.out.println("f="+s);
    }
    public void g(int n)
    {
        s=0;
        sm=1;
        System.out.println("Zadanie 1g");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=x;
            sm*=x;
        }
        System.out.println("g1="+s+" g2="+sm);
    }
    public void h(int n)
    {
        s=0;
        System.out.println("Zadanie 1h");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=Math.pow(-1,i+1)*x;
        }
        System.out.println("h="+s);
    }
    public void i(int n)
    {
        s=0;
        System.out.println("Zadanie 1i");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        for (int i=1;i<=n;i++)
        {
            x= inp.nextDouble();
            s+=(Math.pow(-1,i)*x)/fct(i);
        }
        System.out.println("i="+s);
    }
    public void zad12(int n)
    {
        System.out.println("Zadanie 1.2");
        System.out.println("podaj "+n+" liczb rzeczywistych.");
        s=inp.nextDouble();
        double[] table=new double[n];
        for (int i=0;i<n-1;i++)
        {
            x=inp.nextDouble();
            table[i]=x;
        }
        table[n-1]=s;
        for (int j=0;j<n;j++)
        {
            System.out.println("a"+(j+1)+"="+table[j]);
        }
    }
}
