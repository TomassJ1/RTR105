# 4. laboratorijas darbs 
# Skaitliskā integrēšana

## Teorētiskais pamatojums

Noteiktā integrāļa ģeometriskā interpretācija ir laukums starp x asi un funkcijas grafiku.
   

## Laboratorijas darba mērķis

Dota funkcija  
![](https://latex.codecogs.com/svg.image?f(x)=(1&plus;x)e^{x}).

Aprēķināt funkcijas integrāļa vērtību, izmantojot taisnstūra, trapeču un Simpsona metodes.  

##  Programma

Programma veido dialogu ar lietotāju intervāla galapunktu un precizitātes iegūšanai. Programma izvada integrāļa vērtību, izmantojot taisnstūra, trapeču un Simpsona metodes.

![Integrāļa aprēķins ar prezizitāti 0.1](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/precizitate_0.1.png)

![Integrāļa aprēķins ar prezizitāti 0.01](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/precizitate_0.01.png)

![Rezultāts izmantojot Wolframalpha](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/integral_wolframalpha.png)

Salīdzinot programmas rezultātus ar Wolframalpha, var redzēt, ka visprecīzākos rezultātus ar vismazāko iterāciju skaitu var panākt izmantojot Simpsona metodi.

Funkcijas integrāļa grafiks.

![Integrāļa grafiks](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/4ld_grafiks.png)

## Linki

### Attēli

Gnuplot grafiks [4ld_grafiks.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/4ld_grafiks.png)

Rezultāts izmantojot Wolframalpha [integral_wolframalpha.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/integral_wolframalpha.png)

Dialogs ar lietotāju un programmas rezultāts ar precizitāti 0.1 [precizitate_0.1.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/precizitate_0.1.png)

Dialogs ar lietotāju un programmas rezultāts ar precizitāti 0.01 [precizitate_0.01.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/precizitate_0.01.png)

### Kods

Programma [4ld_integral.c](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/4ld_integral.c)

Gnuplot grafiks [4ld_grafiks.c](https://github.com/TomassJ1/RTR105/blob/main/darbi/4ld_integral/4ld_grafiks.gp)
    
