#!/usr/bin/gnuplot -persist

set terminal png
set output "1ld_grafiks.png"
set title "f(x)=(1+x)*e^x"
set xlabel "x"
set ylabel "y"
set grid
set key left top


set xrange[-5:2]
set yrange[-2:5]

a0(x) = (0+1)*((x)**0)/1
a1(x) = (1+1)*((x)**1)/1
a2(x) = (2+1)*((x)**2)/2*1
a3(x) = (3+1)*((x)**3)/3*2*1

plot (1+x)*exp(x) with lines title "f(x)",\
a0(x) with lines title "S0",\
a0(x)+a1(x) with lines title "S1",\
a0(x)+a1(x)+a2(x) with lines title "S2",\
a0(x)+a1(x)+a2(x)+a3(x) with lines title "S3"



