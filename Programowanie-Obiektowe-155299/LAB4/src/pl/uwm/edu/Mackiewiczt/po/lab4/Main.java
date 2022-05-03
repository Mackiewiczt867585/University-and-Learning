package pl.uwm.edu.Mackiewiczt.po.lab4;

import java.util.Scanner;

public class Main {

    public static void main(String[] args)
    {
        Zadanie1 zad1 = new Zadanie1();
        Zadanie2 zad2 = new Zadanie2();
        Zadanie3 zad3 = new Zadanie3();
        Zadanie4 zad4 = new Zadanie4();
        Zadanie5 zad5 = new Zadanie5();
        System.out.println("Zadanie 1a="+zad1.countChar("cycki",'c'));
        System.out.println("Zadanie 1b="+zad1.countSubStr("hehehe","he"));
        System.out.println("Zadanie 1c="+zad1.middle("kot"));
        System.out.println("Zadanie 1d="+zad1.repeat("ho",4));
        int[] tab = new int[1];
        tab=zad1.where("xdhehehexd","xd");
        System.out.println("zadanie1e=");
        System.out.println(tab[0]);
        System.out.println(tab[1]);
        System.out.println("Zadanie 1e= "+zad1.change("ZaBaWa"));
        System.out.println("Zadanie 2="+zad2.policz("randomChars.txt",'v'));
        System.out.println("Zadanie 3="+zad3.policz("randomWords.txt","brr"));
        System.out.println("Zadanie 4="+zad4.policz(2));
        System.out.println("Zadanie 5="+zad5.policz(1000,2,8));
    }
}
