package pl.tomasz.mackiewicz;


import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {


        ////////Zadanie 1,2,3,4

        LinkedList<String> pracownicy = new LinkedList<>();
        pracownicy.add("pierewszy");
        pracownicy.add("drugi");
        pracownicy.add("trzeci");
        pracownicy.add("czwarty");
        pracownicy.add("piaty");
        pracownicy.add("szosty");
        pracownicy.add("siodmy");
        System.out.println(pracownicy);
        Kolekcje.redukuj(pracownicy,3);
        System.out.println(pracownicy);
        Kolekcje.odwroc(pracownicy);
        System.out.println(pracownicy);



        ///// Zadanie 5

        String sampleText = "Ala ma kota. Ale czy kot ma ale.";
        System.out.println(sampleText);
        System.out.println(Kolekcje.naOpak(sampleText));

        ////// Zadanie 6
        Kolekcje.splitNumber(2015);

        ///Zadanie 7
        Kolekcje.primes();



    }

}
