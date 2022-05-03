package pl.uwm.edu.Mackiewiczt.po.lab4;

import java.math.BigInteger;

public class Zadanie4 {

    public static String policz(int rozmiar)
    {
        BigInteger start = new BigInteger("0");
        BigInteger dodajnik = new BigInteger("1");
        BigInteger mnoznik = new BigInteger("2");
        for(int i=0;i<rozmiar*rozmiar;i++)
        {
            start=start.add(dodajnik);
            dodajnik=dodajnik.multiply(mnoznik);
        }
        return start.toString();
    }

}
