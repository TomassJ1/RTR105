#!/usr/bin/gnuplot -persist

set terminal png
set output "2ld_grafiks.png"
set title "f(x)=(1+x)*e^x-22"
set xlabel "x"
set ylabel "y"
set grid
set key left top


set xrange[0:3]
set yrange[-5:5]
set xzeroaxis


plot (1+x)*exp(x)-22 with lines title "f(x)",\
'2ld.txt' u ($1):($2) with point ls 7




