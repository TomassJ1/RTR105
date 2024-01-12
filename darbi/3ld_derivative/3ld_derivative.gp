#!/usr/bin/gnuplot --persist

set terminal png
set output 'derivative.png'

set grid
set title "f(x)=(1+x)*e^x"
set xlabel "x"
set ylabel "y"
set key left top


set xrange[-3:0]
set yrange[-1:2]
set xzeroaxis


plot "derivative.dat" every ::1 using 1:3 with lines title "f(x)",\
              "derivative.dat" every ::1 using 1:5 with lines title "f'(x)_a_f",\
              "derivative.dat" every ::1 using 1:7 with lines title "f'(x)_f_d",\
              "derivative.dat" every ::1 using 1:9 with lines title "f''(x)_a_f",\
              "derivative.dat" every ::1 using 1:11 with lines title "f''(x)_f_d"
              