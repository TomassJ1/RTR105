# 2. laboratorijas darbs 
# Dihotomijas metode

## Teorētiskais pamatojums

Dihotomijas metodi pielieto saknes atrašanai nepārtrauktām funkcijām (saknes meklēšanas intervālā). Lai atrastu sakni, nepieciešams noteikt intervālu kurā atrodas viena sakne. Tā kā intervālā atrodas viena sakne, intervāla galapunkti ir ar pretējām zīmēm. Dotais intervāls tiek atkārtoti dalīts divās daļās (dalīta tiek tikai intervāla daļa kurā atrodas sakne), līdz tiek noteikta saknes vērtība ar pietiekami lielu precizitāti.

## Laboratorijas darba mērķis

Dota funkcija  
![](https://latex.codecogs.com/svg.image?f(x)=(1&plus;x)e^{x}).

Noteikt dotās funkcijas sakni dotā apgabalā un tam nepeciešamo iterāciju skaitu. Izveidot funkcijas grafiku ar atzīmētu saknes punktu.

##  Programma

Programma veido dialogu ar lietotāju intervāla galapunktu un precizitātes iegūšanai. Programma izvada funkcijas sakni un iterāciju skaitu. Ja sakni nav iespējams aprēķināt (intervālā nav sakņu vai ir pāra sakņu skaits), tad funkcija par to paziņo lietotājam un tālākus aprēķinus neveic. Programma saknes koordinātas ieraksta teksta failā. 

Funkcijas grafiks tika veidots gnuplot vidē. Tika atlikts programmā aprēķinātais saknes punkts. 

![Funkcijas grafiks ar atrasto saknes punktu](https://github.com/TomassJ1/RTR105/blob/main/darbi/2ld_roots/2ld_grafiks.png)

## Linki

### Attēli

Gnuplot grafiks [2ld_grafiks.png](https://github.com/TomassJ1/RTR105/blob/main/darbi/2ld_roots/2ld_grafiks.png)

### Kods

Programma [2ld_roots.c](https://github.com/TomassJ1/RTR105/blob/main/darbi/2ld_roots/2ld_roots.c)

Gnuplot grafiks[2ld_grafiks.gp](https://github.com/TomassJ1/RTR105/blob/main/darbi/2ld_roots/2ld_grafiks.gp)