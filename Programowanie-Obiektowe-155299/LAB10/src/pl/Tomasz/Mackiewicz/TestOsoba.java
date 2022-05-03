package pl.Tomasz.Mackiewicz;

import java.io.File;
import java.io.FileNotFoundException;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class TestOsoba {

    public static void main(String[] args)
    {

//        // Test zadania pierwszego
//        ArrayList<Osoba> grupa = new ArrayList<>(5);
//        grupa.add(new Osoba("Mackiewicz",LocalDate.of(2000,05,26)));
//        grupa.add(new Osoba("Mackiewicz",LocalDate.of(2001,06,06)));
//        grupa.add(new Osoba("Kolorowy",LocalDate.of(2000,05,26)));
//        grupa.add(new Osoba("Uszaty",LocalDate.of(994,04,12)));
//        grupa.add(new Osoba("Krwawy",LocalDate.of(1,10,12)));
//        for(Osoba person : grupa)
//        {
//            System.out.println(person);
//        }
//        Collections.sort(grupa);
//        System.out.println("");
//        for(Osoba person : grupa)
//        {
//            System.out.println(person);
//        }
//
//        System.out.println(grupa.get(0).equals(grupa.get(1)));
//        System.out.println(grupa.get(0).equals(grupa.get(2)));
//
//
//        // Test zadania drugiego
//        ArrayList<Osoba> listaStudentow = new ArrayList<>(5);
//        listaStudentow.add(new Student("Mackiewicz",LocalDate.of(2000,05,26),4.0));
//        listaStudentow.add(new Student("Mackiewicz",LocalDate.of(2001,06,06),3.69));
//        listaStudentow.add(new Student("Kolorowy",LocalDate.of(2000,05,26),5.0));
//        listaStudentow.add(new Student("Uszaty",LocalDate.of(994,04,12),4.4));
//        listaStudentow.add(new Student("Krwawy",LocalDate.of(1,10,12),3.5));
//
//        System.out.println(listaStudentow);
//        Collections.sort(listaStudentow);
//        System.out.println(listaStudentow);


        // Test Zadania trzeciego
        if (args.length==0)
        {
            ArrayList<String> zadanie3 = new ArrayList<>();
            try
            {
                File plik = new File("D:\\studia\\Sem 3\\Programowanie Obiektowe\\LAB11\\sampleText.txt");
                Scanner wczytywanie = new Scanner(plik);
                while (wczytywanie.hasNextLine())
                {
                    zadanie3.add(wczytywanie.nextLine());
                }
                wczytywanie.close();
            }catch (FileNotFoundException error)
            {
                System.out.println("taki plik nie istnieje");
                error.printStackTrace();
            }
            System.out.println(zadanie3);
            Collections.sort(zadanie3);
            System.out.println(zadanie3);
        }
    }
}
