package pl.uwm.edu.Mackiewiczt.po.lab4;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Zadanie2 {

    public static int policz(String nazwaPliku,char znak)
    {
        int licznik=0;
        Zadanie1 x= new Zadanie1();
        try
        {
        File plik = new File(nazwaPliku);
        Scanner readFile = new Scanner(plik);
            while(readFile.hasNextLine())
            {
                String tekst = readFile.nextLine();
                licznik+=x.countChar(tekst,znak);
            }
            readFile.close();
        }
        catch (FileNotFoundException e)
        {
            System.out.println("Error");
            e.printStackTrace();
        }
        return licznik;
    }
}
