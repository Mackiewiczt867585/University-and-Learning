package pl.edu.uwm.po.lab5;

import java.util.ArrayList;
import java.util.Arrays;

public class Main {

    public static void main(String[] args)
    {
        lab5 zad1 = new lab5();
        ArrayList<Integer> listaPierwsza = new ArrayList<>(Arrays.asList(1,2,3,4,5));
        ArrayList<Integer> listaDruga = new ArrayList<>(Arrays.asList(1*2,2*2,3*2,4*2,5*2,6*2,7*2));
        zad1.printArrayList(listaPierwsza);
        System.out.println("");
        zad1.printArrayList(listaDruga);
        System.out.println("");
        zad1.printArrayList(zad1.append(listaPierwsza,listaDruga));
        System.out.println("");
        zad1.printArrayList(zad1.merge(listaPierwsza,listaDruga));
        System.out.println("");
        zad1.printArrayList(zad1.mergeSorted(listaPierwsza,listaDruga));
        System.out.println("");
        zad1.printArrayList(zad1.reversed(listaPierwsza));
        System.out.println("");
        zad1.reverse(listaPierwsza);
        zad1.printArrayList(listaPierwsza);

    }

}
