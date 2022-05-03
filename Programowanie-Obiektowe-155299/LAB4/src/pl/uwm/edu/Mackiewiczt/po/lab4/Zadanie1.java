package pl.uwm.edu.Mackiewiczt.po.lab4;

import java.lang.Math;
import java.util.Arrays;


public class Zadanie1 {

    public static int countChar(String str, char letter) {
        int licznik = 0, dlugosc = 0;
        char[] str1 = new char[str.length()];
        for (int i = 0; i < str.length(); i++) {
            str1[i] = str.charAt(i);
            dlugosc++;
        }
        for (int j = 0; j < dlugosc; j++) {
            if (str1[j] == letter)
                licznik++;
        }
        return licznik;
    }

    public static int countSubStr(String str, String subStr) {
        int licznik = 0, licznik2 = 0, dlugoscStr = str.length(), dlugoscSubStr = subStr.length();
        for (int i = 0; i < dlugoscStr; i++) {
            if (str.charAt(i) == subStr.charAt(0)) {
                for (int j = 0; j < dlugoscSubStr; j++) {
                    if (str.charAt(i + j) != subStr.charAt(j))
                        break;
                    else
                        licznik2++;
                }
                if (dlugoscSubStr == licznik2)
                    licznik++;
                licznik2 = 0;
            }
        }
        return licznik;
    }

    public static String middle(String str) {
        int dlugosc = str.length();
        if (dlugosc % 2 == 1) {
            String wynik = str.substring((int) dlugosc / 2, (int) dlugosc / 2 + 1);
            return wynik;
        }
        if (dlugosc % 2 == 0) {
            String wynik = str.substring(dlugosc / 2 - 1, dlugosc / 2 + 1);
            return wynik;
        }
        return "0";
    }

    public static String repeat(String str, int n) {
        String newString = str;
        for (int i = 1; i < n; i++) {
            str += newString;
        }
        return str;
    }

    public static int[] where(String str, String subStr)
    {
        int licznik2 = 0, dlugoscStr = str.length(), dlugoscSubStr = subStr.length();
        int[] tab = new int[0];
        for (int i = 0; i < dlugoscStr; i++)
        {
            if (str.charAt(i) == subStr.charAt(0))
            {
                for (int j = 0; j < dlugoscSubStr; j++)
                {
                    if (str.charAt(i + j) != subStr.charAt(j))
                        break;
                    else
                        licznik2++;
                }
                if (dlugoscSubStr == licznik2)
                {
                    tab=Arrays.copyOf(tab, (tab.length+1));
                    tab[tab.length-1]=i;
                }
                licznik2 = 0;
            }
        }
        return tab;
    }
    public static String change(String str)
    {
        StringBuffer newString = new StringBuffer();
        for(int i=0;i<str.length();i++)
        {
            if(Character.isUpperCase(str.charAt(i)))
                newString.append(String.valueOf(str.charAt(i)).toLowerCase());
            else
                newString.append(String.valueOf(str.charAt(i)).toUpperCase());
        }
        return newString.toString();
    }
    public static String Nice(String str)
    {
        StringBuffer newString = new StringBuffer();
        int smth=1;
        for(int i=str.length();i>=0;i--)
        {
            newString.append(str.charAt(i));
            if(smth%3==0 && i!=0)
                newString.append("'");
            smth++;
        }
        String temp = newString.toString();
        newString = new StringBuffer();
        for(int i=temp.length()-1;i>=0;i--)
        {
            newString.append(temp.charAt(i));
        }
        return newString.toString();
    }
    public static String nice(String str,char znak, int n)
    {
        StringBuffer newString= new StringBuffer();
        int smth=1;
        for(int i=(str.length()-1);i>=0;i--)
        {
            newString.append(str.charAt(i));
            if(smth%n==0 && i!=0)  newString.append(znak);
            smth++;
        }
        String temp= newString.toString();
        newString=new StringBuffer();
        for(int i=temp.length()-1;i>=0;i--){
            newString.append(temp.charAt(i));
        }
        return newString.toString();
    }
}
