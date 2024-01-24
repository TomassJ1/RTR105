# 5. laboratorijas darbs 
# Skaitļu kopas kārtošana

## Teorētiskais pamatojums

"Bubble sort" ir vienkāršs kopas kārtošanas algoritms. Tas salīdzina katru kopas elementu ar nākamo elementu un, ja nepieciešams samaina tos vietām. Algoritms tiek atkārtots kamēr, izejot caur visai kopai, nevienu reizi nav veikta apmainīšana vietām.

## Laboratorijas darba mērķis

Uzrakstīt programmu, kas veido dialogu ar lietotāju teikuma iegūšanai. Izvadīt teikuma burtu min, max vērtību, vidējo vērtību, mediānu, modu, sakārtotu burtu rindu.

##  Programma

Sākumā programma izveido nepieciešamos mainīgos un veido dialogu ar lietotāju teikuma iegūšanai.

1. Programma noskaka kuri no simboliem ir burti. ASCII tabulā burti atbilst simboliem ar vērtībām  no 65 līdz 90 un no 97 līdz 122. Simbolus kuri neietilpst attiecīgajās vērtībās, programma pārraksta ar vērtību 0.

2. Programma nosaka cik simboli ir burti - saskaita cik simboli nav ar vērtību 0.

3. Izveido jaunu masīvu ar tik simboliem, cik saskaitīts iepriekšējā ciklā.

4. Pārraksta burtus jaunā masīvā. Atbrīvo atmiņas apgabalu, kur glabājās iepriekšējais masīvs.

5. Sakārto masīva elementus augošā secībā, izmantojot "bubble sort". Izmantojot cikla operatoru "do while", cikls tiek veikts vismaz vienu reizi. Veicot pārkārtošanas operāciju, mainīgais k tiek palielināts par 1. Cikls tiek atkārtots kamēr k ir lielāks par 0 t. i. kamēr tiek veikta pārkārtošanas operācija.

6. Min, max vidējās vērtības, mediānas izvadīšana. Programma rezultātus izvada tabulas veidā.
* Minimālā vērība - 0 masīva elements.
* Maksimālā vērtība - pēdējais masīva elemnts.
* Vidējā vērtība - ar cikla palīdzību saskaita visus masīva elementus un izdala ar elementu skaitu.
* Mediānas vērtība - nosaka vai ir pāra vai nepāra elementu skaits. Salīdzina elementu skaita dalījuma ar 2 atlikumu ar 0, 
    * ja pāra, tad izvada divu vidējo elementu summu izdalītu ar 2,
    * ja nepāra, tad izvada vidējo elementu.

7. Nosaka maksimālo elementu atkārtošanās skaitu - salīdzina vai priekšā esošie elementi ir tādi paši kā izvēlētais elements. 

8. Pārbauda vai iepriešējā ciklā iegūtā max vērtība neatbilst visiem elementiem - ja visi elementi atkārtojas vienādu skaitu reižu, tad modas nav. Izvada simbolus.

9. Izvada sakārtotu simbolu rindu.

10. Ieraksta katra burta atkārtošanās skaitu .dat failā. 

![Dialogs ar lietotāju](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/dialogs_ar_lietotaju.png)

![Histogramma](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/histogram.png)

## Linki

### Attēli

Gnuplot grafiks [histogram.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/histogram.png)

Dialogs ar lietotāju [dialogs_ar_lietotaju.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/dialogs_ar_lietotaju.png)


### Kods

Programma [5ld_statistics.c](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/5ld_statistics.c)

Gnuplot grafiks [5ld_statistics.gp](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/5ld_statistics.gp)

Datu fails [statistics.dat](https://github.com/TomassJ1/RTR105/blob/main/darbi/5ld_statistics/statistics.dat)
    
