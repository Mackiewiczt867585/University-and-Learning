package pl.edu.uwm.po.lab5;

import java.util.ArrayList;

public class lab5 {

    public static void printArrayList(ArrayList<Integer> lista)
    {
        for(int i=0;i<lista.size();i++)
        {
            System.out.println(lista.get(i));
        }
    }
    public static ArrayList<Integer> append(ArrayList<Integer> a,ArrayList<Integer> b)
    {
        ArrayList<Integer> newlist = new ArrayList<>();
        newlist.addAll(a);
        newlist.addAll(b);
        return newlist;
    }
    public static ArrayList<Integer> merge(ArrayList<Integer> a,ArrayList<Integer> b)
    {
        int dlugoscA = a.size();
        int dlugoscB = b.size();
        int krotszaDlugsoc;
        krotszaDlugsoc=Math.min(dlugoscA,dlugoscB);
        ArrayList<Integer> newList = new ArrayList<>();
        int i;
        for (i=0;i<krotszaDlugsoc;i++)
        {
            newList.add(a.get(i));
            newList.add(b.get(i));
        }
        if(dlugoscA>dlugoscB)
        {
            for(int j=0;j<Math.abs(dlugoscA-dlugoscB);j++)
            {
                newList.add(a.get(i+j));
            }
        }
        else if(dlugoscB>dlugoscA)
        {
            for(int j=0;j<Math.abs(dlugoscB-dlugoscA);j++)
            {
                newList.add(b.get(i+j));
            }
        }
        return newList;
    }
    public static ArrayList<Integer> mergeSorted(ArrayList<Integer> a,ArrayList<Integer> b)
    {
        ArrayList<Integer> newList = new ArrayList<>();
        int indexA=0,indexB=0;
        for(int i=0;i<(int)(a.size()+b.size());i++)
        {
            if(indexA<a.size()&&indexB<b.size())
            {
                if(a.get(indexA)<b.get(indexB))
                {
                    newList.add(a.get(indexA));
                    indexA++;
                }
                else
                {
                    newList.add(b.get(indexB));
                    indexB++;
                }
            }
            else if(indexA<a.size())
            {
                newList.add(a.get(indexA));
                indexA++;
            }
            else
            {
                newList.add(b.get(indexB));
                indexB++;
            }

        }
        return newList;
    }
    public static ArrayList<Integer> reversed(ArrayList<Integer> a)
    {
        ArrayList<Integer> newList = new ArrayList<>();
        for(int i=a.size()-1;i>=0;i--)
        {
            newList.add(a.get(i));
        }
        return newList;
    }
    public static void reverse(ArrayList<Integer> a)
    {
        ArrayList<Integer> temp = new ArrayList<>(a);
        int index=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            a.set(index,temp.get(i));
            index++;
        }
    }
}

