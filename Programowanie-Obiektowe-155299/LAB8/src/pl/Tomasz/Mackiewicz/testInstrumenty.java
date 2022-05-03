package pl.Tomasz.Mackiewicz;

import java.time.LocalDate;
import java.util.ArrayList;

public class testInstrumenty {
    public static void main(String[] args)
    {
        ArrayList<Instrument> orkiestra = new ArrayList<>();
        orkiestra.add(new Flet("PianoMaster",LocalDate.of(2001,01,29)));
        orkiestra.add(new Skrzypce("SkrzypekPl",LocalDate.of(2020,10,10)));
        orkiestra.add(new Skrzypce("SkrzypekPl",LocalDate.of(2012,2,9)));
        orkiestra.add(new Skrzypce("DeutscheMusik",LocalDate.of(1942,2,1)));
        orkiestra.add(new Fortepian("ProKlawisz",LocalDate.of(2011,2,4)));
        for(Instrument i : orkiestra)
        {
            System.out.println(i.dzwiek());
            System.out.println(i);
        }
    }

}
