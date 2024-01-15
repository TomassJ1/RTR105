# 3. laboratorijas darbs 
# Skaitliskā diferencēšana

## Teorētiskais pamatojums

![](https://latex.codecogs.com/svg.image?f(x)=(1&plus;x)e^{x})

Pirmās un otrās kārtas analītisko atvasinājumu formulas

![](https://latex.codecogs.com/svg.image?f'(x)=(3&plus;x)e^{x})

![](https://latex.codecogs.com/svg.image?f'(x)=(2&plus;x)e^{x})

Formulas atvasinājuma aprēķināšanai diferencējot uz priekšu

![](https://latex.codecogs.com/svg.image?&space;f'(x)=\frac{f(x&plus;\Delta&space;x)-f(x)}{\Delta&space;x})

![](https://latex.codecogs.com/svg.image?&space;f''(x)=\frac{f(x&plus;2\Delta&space;x)-2f(x&plus;\Delta&space;x)&plus;f(x)}{(\Delta&space;x)^{2}})
   
  

## Laboratorijas darba mērķis

Aprēķināt funkcijas vērtību, pirmās un otrās kārtas atvasinājumus, izmantojot analītiskās formulas un diferencēšanu uz priekšu. Rezultātus attēlot un saglabāt .dat failā un attēlot grafiski, izmantojot gnuplot.

##  Programma

Programma veido dialogu ar lietotāju intervāla galapunktu un precizitātes iegūšanai. Programma ieraksta .dat failā funkcijas vērtību, pirmās un otrās kārtas atvasinājumus, izmantojot analītiskās formulas un diferencēšanu uz priekšu. Pēc datu saglabāšanas programma par to paziņo lietotājam.

Rezultāti attēloti grafiski, izmantojot gnuplot. Precizitāte 0.1

![Grafiks precizitāte 0.1](https://github.com/TomassJ1/RTR105/blob/main/darbi/3ld_derivative/derivative.png)

Rezultāti attēloti grafiski, izmantojot gnuplot. Precizitāte 0.01

![Grafiks precizitāte 0.01](https://github.com/TomassJ1/RTR105/blob/main/darbi/3ld_derivative/derivative_delta_x%3D0.01.png)

Salīdzinot abus grafikus var redzēt, ka ar augstāku precizitāti atvasinājuma grafiki, kas iegūti izmantojot diferencēšanu uz priekšu sakrīt ar grafikiem, kas iegūti ar analītiskajām formulām (pilnīgi sakrist nevar, jo delta_x nevar būt bezgalīgi mazs lelums).

## Linki

### Attēli

Gnuplot grafiks precizitāte 0.1 [derivative.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/3ld_derivative/derivative.png)

Gnuplot grafiks precizitāte 0.01 [derivative_delta_x=0.01.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/3ld_derivative/derivative_delta_x%3D0.01.png)

### Kods

Programma [3ld_derivative.c](https://github.com/TomassJ1/RTR105/blob/main/darbi/3ld_derivative/3ld_derivative.c)

Gnuplot grafiks [3ld_derivative.gp](https://github.com/TomassJ1/RTR105/blob/main/darbi/3ld_derivative/3ld_derivative.gp)
    