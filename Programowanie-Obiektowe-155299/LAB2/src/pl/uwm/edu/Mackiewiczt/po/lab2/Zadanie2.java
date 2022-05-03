package pl.uwm.edu.Mackiewiczt.po.lab2;

import java.util.Scanner;

public class Zadanie2 {

    Scanner inp = new Scanner(System.in);
    double x = 0, s, sm, sum;

    public double fct(int n) {
        s = 1;
        for (int i = 1; i <= n; i++) {
            s *= i;
        }
        return s;
    }

    public void a(int n) {
        s = 0;
        System.out.println("Zadanie 2a");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i = 1; i <= n; i++) {
            x = inp.nextDouble();
            if (x % 2 == 1) {
                s += 1;
            }
        }
        System.out.println("w podanych liczbach jest/sa " + s + " liczy nieparzyste");
    }

    public void b(int n) {
        s = 0;
        System.out.println("Zadanie 2b");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i = 1; i <= n; i++) {
            x = inp.nextDouble();
            if (x % 3 == 0 && x % 5 != 0) {
                s += 1;
            }
        }
        System.out.println("w podanych liczbach jest/sa " + s + " liczb podzielncyh przez 3 i niepodzielnych przez 5");
    }

    public void c(int n) {
        s = 0;
        System.out.println("Zadanie 3c");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i = 1; i <= n; i++) {
            x = inp.nextDouble();
            if (x % 2 == 0 && Math.sqrt(x) % 2 == 0) {
                s += 1;
            }
        }
        System.out.println("w podanych liczbach jest/sa " + s + "kwadratow liczby parzystej");
    }

    public void d(int n) {
        double[] table = new double[n];
        s = 0;
        System.out.println("Zadanie 4d");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i = 0; i < n; i++) {
            x = inp.nextDouble();
            table[i] = x;
        }
        for (int i = 1; i < n; i++) {
            if (table[i] < ((table[i - 1] + table[i + 1]) / 2)) {
                s += 1;
            }
        }
        System.out.println("jest " + n + " takich liczb.");
    }

    public void e(int n) {
        double[] table = new double[n];
        s = 0;
        System.out.println("Zadanie 4d");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i = 0; i < n; i++) {
            x = inp.nextDouble();
            table[i] = x;
        }
        for (int i = 1; i <= n; i++) {
            if (Math.pow(2, i) < table[i] && table[i] <fct(i))
            {
                s+=1;
            }
        }
        System.out.println("jest "+s+" takich liczb");
    }

    public void f(int n)
    {
        
    }

    public void Zadanie22(int n)
    {
        s=n;
        System.out.println("Zadanie 2.2");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i=0;i<n;i++)
        {
            x=inp.nextDouble();
                if (x>0)
                {
                    s+=x;
                }
        }
        System.out.println("suma podanych liczb dodatnich to: "+s);
    }

    public void Zadanie23(int n)
    {
        s=0;    //ujemne
        sm=0;   //dodatnie
        sum=0;  //zera
        System.out.println("Zadanie 2.3");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i=0;i<n;i++)
        {
            x = inp.nextDouble();
                if(x>0)
                {
                    sm+=1;
                }
                if(x<0)
                {
                    sm+=1;
                }
                if(x==0)
                {
                    sum+=1;
                }
        }
        System.out.println("jest :");
        System.out.println(sm+" liczb dodatnich");
        System.out.println(s+" liczb ujemnych");
        System.out.println(sum+" zer");
    }
    public void Zadanie24(int n)
    {
        s=0;    //najmniejsza
        sm=0;   //najwieksza
        System.out.println("Zadnie 2.4");
        System.out.println("podaj " + n + " liczb rzeczywistych.");
        for (int i=0;i<n;i++)
        {
            x = inp.nextDouble();
                if(x<s)
                {
                    s=x;
                }
                if(x>sm)
                {
                    sm=x;
                }
        }
        System.out.println("najwieksza liczba to:"+sm);
        System.out.println("najmniejsza liczba to"+s);
    }
    public void Zadanie25(int n)
    {
        s=0;
        double [] table = new double[n];
        for (int i=0;i<n;i++)
        {
            table[i]=Double.parseDouble(inp.nextLine());
            if(i>0)
            {
                if((table[i-1]>0)&&(table[i]>0))
                {
                    s++;
                }
            }
        }
        System.out.println("ilsoc tych par to: "+s);
    }
}
