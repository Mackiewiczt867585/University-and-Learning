package pl.uwm.edu.Mackiewiczt.po.lab2;

import java.util.Random;

public class Zadanie3 {

    public void wypiszMacierz(int[][] tab, int dlugosc, int szerokosc) {
        for (int i = 0; i < dlugosc; i++)
        {
            System.out.print("[");
            for (int j = 0; j < szerokosc; j++)
            {
                System.out.print(tab[i][j] + " ");

            }
            System.out.println("]");
        }
    }

    public void kreatorMacierzy(int m, int n, int k)
    {
        int[][] a = new int[m][n];
        int[][] b = new int[n][k];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = (int) (Math.random() * (10 - 1 + 1) + 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < k; j++)
            {
                b[i][j] = (int) (Math.random() * (10 - 1 + 1) + 1);
            }
        }
        System.out.println("macierz a=");
        wypiszMacierz(a, m, n);
        System.out.println("macierz b=");
        wypiszMacierz(b, n, k);

        int[][] c = new int[n][n];
        int tempElement, secondIndex = 0;
        for (int i = 0; i < n; i++)
        {
            for(secondIndex=0;secondIndex<n;secondIndex++)
            {
                tempElement=0;
                for (int j = 0; j < n; j++)
                {
                    tempElement += (a[i][j] * b[j][secondIndex]);
                }
                c[i][secondIndex] = tempElement;
            }
        }
        System.out.println("maczierz c=");
        wypiszMacierz(c, n, n);
    }
}

//a[0][0]*b[0][0]
//a[0][1]*b[1][0]
//a[0][2]*b[2][0]
//c[0][0]=temp
//a[1][0]*b[0][1]
//a[1][1]*b[1][1]
//a[1][2]*b[2][1]