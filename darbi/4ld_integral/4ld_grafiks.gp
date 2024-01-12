#!/usr/bin/gnuplot -persist

set terminal png
set output "4ld_grafiks.png"
set title "f(x)=(1+x)*e^x"
set xlabel "x"
set ylabel "y"
set grid
set key left top


set xrange[-3.5:1.5]
set yrange[-1:8]
set xzeroaxis


plot (1+x)*exp(x) with lines title "f(x)",\
    [-3:1] (1+x)*exp(x) with filledcurves y=0 title "f(x) integrālis"
