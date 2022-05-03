package pl.tomasz.mackiewicz;


import javax.lang.model.type.ArrayType;
import java.util.*;
import java.util.function.Predicate;

public class Kolekcje {

    public static <T> void redukuj(LinkedList<T> lista, int n) {
        Collection<T> coll = lista;
        int counter = 1;
        Iterator<?> iterator = coll.iterator();

        while (iterator.hasNext()) {
            iterator.next();
            if (counter % n == 0) {
                iterator.remove();
                counter = 1;
            } else {
                counter++;
            }
        }
    }

    public static <T> void odwroc(LinkedList<T> lista) {
        for (int i = 0; i < lista.size() / 2; i++) {
            T e = lista.set(i, lista.get(lista.size() - 1 - i));
            lista.set(lista.size() - 1 - i, e);
        }
    }

    public static String naOpak(String tekst)
    {
        Stack<String> stos = new Stack<String>();
        List<String> wordSplit = Arrays.asList(tekst.split(" "));
        StringBuilder finish = new StringBuilder();
        Iterator<String> iterator = wordSplit.iterator();

        while (iterator.hasNext())
        {
            String word = iterator.next();
            stos.push(word);
            if(word.endsWith("."))
            {
                int h=stos.size();
                for (int i = 0; i < h; i++)
                {

                    String temp = stos.pop().replace(".","");
                    if (i==0)
                    {
                        Character x = Character.toUpperCase(temp.charAt(0));
                        String temp2 = temp;
                        temp=x+temp2.substring(1,temp2.length());
                    }
                    if(i==h-1)
                    {
                        Character x = Character.toLowerCase(temp.charAt(0));
                        String temp2 = temp;
                        temp=x+temp2.substring(1,temp2.length());
                    }
                    finish.append(temp+" ");
                }
                finish.setLength(finish.length()-1);
                finish.append(". ");
            }
        }
        return finish.toString();
    }

    public static void splitNumber(int number)
    {
        Stack<Integer> stos = new Stack<Integer>();
        while(number>0)
        {
            stos.push(number%10);
            number=number/10;
        }
        while(stos.size()!=0)
        {
            System.out.print(stos.pop()+" ");
        }
        System.out.println("");
    }

    public static void primes()
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Do jakiej liczby szukać liczby pierwsze?: ");
        int n = in.nextInt();
        ArrayList<Integer> primes = new ArrayList<>();
        for (int i = 2; i <= n; i++) {
            primes.add(i);
        }
        Predicate<Integer> predicate = s -> s % 3==0 && s!=3;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            primes.removeIf(predicate);
            int finalI = i;
            predicate = s -> s% finalI == 0 & s!=finalI;
        }
        for (Integer e : primes){
            System.out.println(e+ " ");
        }
    }

    public static <T extends Iterable<?>> void print(T obj)
    {
        Iterator<?> iterator = obj.iterator();
        while(iterator.hasNext())
        {
            System.out.println(iterator.next());
            if (iterator.hasNext())
                System.out.println(", ");
        }
        System.out.println("");
    }

}
