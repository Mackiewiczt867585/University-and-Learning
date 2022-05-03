package pl.Tomasz.Mackiewicz;

import java.time.LocalDate;

abstract class Instrument {

    private String producent;
    private LocalDate rokProdukcji;

    public Instrument(String producent,LocalDate rokProdukcji )
    {
        this.producent=producent;
        this.rokProdukcji=rokProdukcji;
    }

    public String getProducent()
    {
        return this.producent;
    }

    public LocalDate getRokProdukcji()
    {
        return this.rokProdukcji;
    }

     public abstract String dzwiek();

    @Override
    public boolean equals(Object objekt)
    {
        return this.toString().equals(objekt.toString());
    }

    @Override
    public String toString()
    {
        return this.getClass().getSimpleName()+", producent:"+this.producent+",data produkcji:"+this.rokProdukcji;
    }


}
