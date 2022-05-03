package pl.edu.uwm.po.lab6;

import java.util.Scanner;
import java.time.LocalDate;

public class rachunekBankowy {

    static Scanner inp = new Scanner(System.in);

    private double rocznaStopaProcentowa;
    private double saldo;

    public rachunekBankowy(double saldo) {
        this.saldo = saldo;
    }

    public double getSaldo()
    {
        return this.saldo;
    }

    public double getRocznaStopaProcentowa()
    {
        return this.rocznaStopaProcentowa;
    }

    public void obliczMiesieczneOdsetki()
    {
     this.saldo+=(this.saldo*rocznaStopaProcentowa)/12;
    }

    public void setRocznaStopaProcentowa()
    {
     System.out.println("Podaj nowa roczna stope procentowa");
     this.rocznaStopaProcentowa=inp.nextDouble();
    }

}
