package pl.uwm.edu.Mackiewiczt.po.lab4;

import java.math.BigDecimal;
import java.math.RoundingMode;

public class Zadanie5 {

    public static String policz(int kapitalPoczatkowy,int stopaProcentowa,int dlugoscOkresuOszczedzania)
    {
        BigDecimal kapital = new BigDecimal(String.valueOf(kapitalPoczatkowy));
        BigDecimal stopa = new BigDecimal(String.valueOf(stopaProcentowa));
        BigDecimal dlugosc = new BigDecimal(String.valueOf(dlugoscOkresuOszczedzania));
        BigDecimal wynik = new BigDecimal(String.valueOf(kapitalPoczatkowy));
        wynik=wynik.add(kapital.multiply(dlugosc.multiply(stopa.divide(new BigDecimal("100")))));
        wynik=wynik.setScale(2, RoundingMode.HALF_UP);
        return wynik.toString();
    }

}
